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
 * @file aia_json_constants.h
 * @brief Constants related to JSON messages.
 */

#ifndef AIA_JSON_CONSTANTS_H_
#define AIA_JSON_CONSTANTS_H_

/* The config header is always included first. */
#include <aia_config.h>

#include <stdint.h>

/** Key for the header object in a Aia JSON message. */
#define AIA_JSON_CONSTANTS_HEADER_KEY "header"

/** Key for the name field in a Aia JSON message header. */
#define AIA_JSON_CONSTANTS_NAME_KEY "name"

/** Key for the message ID field in a Aia JSON message header. */
#define AIA_JSON_CONSTANTS_MESSAGE_ID_KEY "messageId"

/** Key for the payload object in a Aia JSON message. */
#define AIA_JSON_CONSTANTS_PAYLOAD_KEY "payload"

/** Key for the token fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_TOKEN_KEY "token"

/** Key for the volume fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_VOLUME_KEY "volume"

/** Key for the type fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_TYPE_KEY "type"

/** Key for the state fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_STATE_KEY "state"

/** Key for the offset fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_OFFSET_KEY "offset"

/** Key for the message fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_MESSAGE_KEY "message"

/** Key for the topic fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_TOPIC_KEY "topic"

/** Key for the sequence number fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_SEQUENCE_NUMBER_KEY "sequenceNumber"

/** Key for the initiator fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_INITIATOR_KEY "initiator"

/** Key for the code fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_CODE_KEY "code"

/** Key for the description fields in the Aia JSON messages. */
#define AIA_JSON_CONSTANTS_DESCRIPTION_KEY "description"

/** Type used to LONG values in Aia Json messages. */
typedef uint64_t AiaJsonLongType;

#define AIA_EXCEPTION_ENCOUNTERED_ERROR_KEY "error"

#define AIA_EXCEPTION_ENCOUNTERED_ERROR_CODE_KEY AIA_JSON_CONSTANTS_CODE_KEY

#define AIA_EXCEPTION_ENCOUNTERED_MALFORMED_MESSAGE_CODE "MALFORMED_MESSAGE"

#define AIA_EXCEPTION_ENCOUNTERED_INTERNAL_ERROR_CODE "INTERNAL_ERROR"

#define AIA_EXCEPTION_ENCOUNTERED_ERROR_DESCRIPTION_KEY \
    AIA_JSON_CONSTANTS_DESCRIPTION_KEY

#define AIA_EXCEPTION_ENCOUNTERED_MESSAGE_KEY AIA_JSON_CONSTANTS_MESSAGE_KEY

#define AIA_EXCEPTION_ENCOUNTERED_MESSAGE_TOPIC_KEY AIA_JSON_CONSTANTS_TOPIC_KEY

#define AIA_EXCEPTION_ENCOUNTERED_MESSAGE_SEQUENCE_NUMBER_KEY \
    AIA_JSON_CONSTANTS_SEQUENCE_NUMBER_KEY

#define AIA_EXCEPTION_ENCOUNTERED_MESSAGE_INDEX_KEY "index"

#define AIA_OPEN_SPEAKER_OFFSET_KEY AIA_JSON_CONSTANTS_OFFSET_KEY

#define AIA_CLOSE_SPEAKER_OFFSET_KEY AIA_JSON_CONSTANTS_OFFSET_KEY

#define AIA_SPEAKER_OPENED_OFFSET_KEY AIA_JSON_CONSTANTS_OFFSET_KEY

#define AIA_SPEAKER_CLOSED_OFFSET_KEY AIA_JSON_CONSTANTS_OFFSET_KEY

#define AIA_SPEAKER_MARKER_ENCOUNTERED_MARKER_KEY "marker"

#define AIA_BUFFER_STATE_CHANGED_MESSAGE_KEY AIA_JSON_CONSTANTS_MESSAGE_KEY

#define AIA_BUFFER_STATE_CHANGED_MESSAGE_TOPIC_KEY AIA_JSON_CONSTANTS_TOPIC_KEY

#define AIA_BUFFER_STATE_CHANGED_MESSAGE_SEQUENCE_NUMBER_KEY \
    AIA_JSON_CONSTANTS_SEQUENCE_NUMBER_KEY

#define AIA_BUFFER_STATE_CHANGED_STATE_KEY AIA_JSON_CONSTANTS_STATE_KEY

#define AIA_OPEN_MICROPHONE_TIMEOUT_IN_MILLISECONDS_KEY "timeoutInMilliseconds"

#define AIA_OPEN_MICROPHONE_INITIATOR_KEY AIA_JSON_CONSTANTS_INITIATOR_KEY

#define AIA_OPEN_MICROPHONE_INITIATOR_TYPE_KEY AIA_JSON_CONSTANTS_TYPE_KEY

#define AIA_OPEN_MICROPHONE_INITIATOR_PAYLOAD_KEY AIA_JSON_CONSTANTS_PAYLOAD_KEY

#define AIA_OPEN_MICROPHONE_INITIATOR_PAYLOAD_TOKEN_KEY \
    AIA_JSON_CONSTANTS_TOKEN_KEY

#define AIA_MICROPHONE_OPENED_PROFILE_KEY "profile"

#define AIA_MICROPHONE_OPENED_INITIATOR_KEY AIA_JSON_CONSTANTS_INITIATOR_KEY

#define AIA_MICROPHONE_OPENED_INITIATOR_TYPE_KEY AIA_JSON_CONSTANTS_TYPE_KEY

#define AIA_MICROPHONE_OPENED_INITIATOR_PAYLOAD_KEY \
    AIA_JSON_CONSTANTS_PAYLOAD_KEY

#define AIA_MICROPHONE_OPENED_INITIATOR_PAYLOAD_TOKEN_KEY \
    AIA_JSON_CONSTANTS_TOKEN_KEY

#define AIA_MICROPHONE_OPENED_INITIATOR_PAYLOAD_WAKE_WORD_KEY "wakeWord"

#define AIA_MICROPHONE_OPENED_INITIATOR_PAYLOAD_WAKE_WORD_INDICES_KEY \
    "wakeWordIndices"

#define AIA_MICROPHONE_OPENED_INITIATOR_PAYLOAD_WAKE_WORD_INDICES_BEGIN_OFFSET_KEY \
    "beginOffset"

#define AIA_MICROPHONE_OPENED_INITIATOR_PAYLOAD_WAKE_WORD_INDICES_END_OFFSET_KEY \
    "endOffset"

#define AIA_MICROPHONE_OPENED_OFFSET_KEY AIA_JSON_CONSTANTS_OFFSET_KEY

#define AIA_MICROPHONE_CLOSED_OFFSET_KEY AIA_JSON_CONSTANTS_OFFSET_KEY

#define AIA_CAPABILITIES_PUBLISH_MESSAGE_ID_KEY "publishMessageId"

#define AIA_CAPABILITIES_ACKNOWLEDGE_CODE_KEY AIA_JSON_CONSTANTS_CODE_KEY

#define AIA_CAPABILITIES_ACCEPTED_CODE "CAPABILITIES_ACCEPTED"

#define AIA_CAPABILITIES_REJECTED_CODE "CAPABILITIES_REJECTED"

#define AIA_CAPABILITIES_ACKNOWLEDGE_DESCRIPTION_KEY \
    AIA_JSON_CONSTANTS_DESCRIPTION_KEY

#define AIA_SET_VOLUME_VOLUME_KEY AIA_JSON_CONSTANTS_VOLUME_KEY

#define AIA_SET_VOLUME_OFFSET_KEY AIA_JSON_CONSTANTS_OFFSET_KEY

#define AIA_VOLUME_CHANGED_VOLUME_KEY AIA_JSON_CONSTANTS_VOLUME_KEY

#define AIA_VOLUME_CHANGED_OFFSET_KEY AIA_JSON_CONSTANTS_OFFSET_KEY

#define AIA_SET_ATTENTION_STATE_STATE_KEY AIA_JSON_CONSTANTS_STATE_KEY

#define AIA_SET_ATTENTION_STATE_OFFSET_KEY AIA_JSON_CONSTANTS_OFFSET_KEY

#define AIA_ROTATE_SECRET_NEW_SECRET_KEY "newSecret"

#define AIA_ROTATE_SECRET_DIRECTIVE_SEQUENCE_NUMBER_KEY \
    "directiveSequenceNumber"

#define AIA_ROTATE_SECRET_SPEAKER_SEQUENCE_NUMBER_KEY "speakerSequenceNumber"

#define AIA_ROTATE_SECRET_EVENT_SEQUENCE_NUMBER_KEY "eventSequenceNumber"

#define AIA_ROTATE_SECRET_MICROPHONE_SEQUENCE_NUMBER_KEY \
    "microphoneSequenceNumber"

#define AIA_SET_ALERT_TOKEN_KEY AIA_JSON_CONSTANTS_TOKEN_KEY

#define AIA_SET_ALERT_SCHEDULED_TIME_KEY "scheduledTime"

#define AIA_SET_ALERT_DURATION_IN_MILLISECONDS_KEY "durationInMilliseconds"

#define AIA_SET_ALERT_TYPE_KEY AIA_JSON_CONSTANTS_TYPE_KEY

#define AIA_DELETE_ALERT_TOKEN_KEY AIA_JSON_CONSTANTS_TOKEN_KEY

#define AIA_SET_ALERT_VOLUME_VOLUME_KEY AIA_JSON_CONSTANTS_VOLUME_KEY

#define AIA_SET_ALERT_SUCCEEDED_TOKEN_KEY AIA_JSON_CONSTANTS_TOKEN_KEY

#define AIA_SET_ALERT_FAILED_TOKEN_KEY AIA_JSON_CONSTANTS_TOKEN_KEY

#define AIA_DELETE_ALERT_SUCCEEDED_TOKEN_KEY AIA_JSON_CONSTANTS_TOKEN_KEY

#define AIA_DELETE_ALERT_FAILED_TOKEN_KEY AIA_JSON_CONSTANTS_TOKEN_KEY

#define AIA_ALERT_VOLUME_CHANGED_VOLUME_KEY AIA_JSON_CONSTANTS_VOLUME_KEY

#define AIA_SYNCHRONIZE_STATE_EVENT_SPEAKER_KEY "speaker"

#define AIA_SYNCHRONIZE_STATE_EVENT_SPEAKER_VOLUME_KEY \
    AIA_JSON_CONSTANTS_VOLUME_KEY

#define AIA_SYNCHRONIZE_STATE_EVENT_ALERTS_KEY "alerts"

#define AIA_SYNCHRONIZE_STATE_EVENT_ALERTS_ALL_ALERTS_KEY "allAlerts"

#define AIA_BUTTON_COMMAND_ISSUED_COMMAND_KEY "command"

#define AIA_SET_CLOCK_CURRENT_TIME_KEY "currentTime"

#endif /* ifndef AIA_JSON_CONSTANTS_H_ */
