/*
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file aia_utils.c
 * @brief Implements utility functions in aia_utils.h.
 */

/* The config header is always included first. */
#include <aia_config.h>

#include <aiacore/aia_utils.h>

bool AiaGenerateMessageId( char* buffer, size_t bufferLength )
{
    if( !buffer )
    {
        AiaLogError( "Null buffer." );
        return false;
    }
    if( !bufferLength )
    {
        AiaLogError( "Zero bufferLength." );
        return false;
    }

    /* Generate the random binary values. */
    if( !AiaRandom_Rand( (unsigned char*)buffer, bufferLength - 1 ) )
    {
        AiaLogError( "Failed to generate %zu random message ID bytes.",
                     bufferLength );
        return false;
    }

    /* Convert to printable ascii. */
    static const char firstPrintableAsciiChar = 32;
    const char numPrintableAsciiChars = 127 - firstPrintableAsciiChar;
    for( size_t i = 0; i < bufferLength - 1; ++i )
    {
        buffer[ i ] = firstPrintableAsciiChar +
                      (unsigned char)buffer[ i ] % numPrintableAsciiChars;

        /* Skip over a couple of problematic characters for JSON strings since
         * there is no other sanitation in the SDK.  Also skipping spaces for
         * readability. */
        switch( buffer[ i ] )
        {
            case '\\':
            case '"':
            case ' ':
                ++buffer[ i ];
        }
    }

    /* Null-terminate. */
    buffer[ bufferLength - 1 ] = '\0';

    return true;
}
