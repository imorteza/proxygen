/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#include "proxygen/lib/http/HTTP3ErrorCode.h"
#include <glog/logging.h>

namespace proxygen {

std::string toString(HTTP3::ErrorCode code) {
  switch (code) {
    case HTTP3::ErrorCode::HTTP_NO_ERROR:
      return "HTTP: No error";
    case HTTP3::ErrorCode::HTTP_GENERAL_PROTOCOL_ERROR:
      return "HTTP: General protocol error";
    case HTTP3::ErrorCode::HTTP_INTERNAL_ERROR:
      return "HTTP: Internal error";
    case HTTP3::ErrorCode::HTTP_STREAM_CREATION_ERROR:
      return "HTTP: Stream creation error";
    case HTTP3::ErrorCode::HTTP_CLOSED_CRITICAL_STREAM:
      return "HTTP: Critical stream was closed";
    case HTTP3::ErrorCode::HTTP_FRAME_UNEXPECTED:
      return "HTTP: Unexpected frame";
    case HTTP3::ErrorCode::HTTP_FRAME_ERROR:
      return "HTTP: Frame error";
    case HTTP3::ErrorCode::HTTP_EXCESSIVE_LOAD:
      return "HTTP: Peer generating excessive load";
    case HTTP3::ErrorCode::HTTP_ID_ERROR:
      return "HTTP: ID error";
    case HTTP3::ErrorCode::HTTP_SETTINGS_ERROR:
      return "HTTP: Settings error";
    case HTTP3::ErrorCode::HTTP_MISSING_SETTINGS:
      return "HTTP: No SETTINGS frame received";
    case HTTP3::ErrorCode::HTTP_REQUEST_REJECTED:
      return "HTTP: Server did not process request";
    case HTTP3::ErrorCode::HTTP_REQUEST_CANCELLED:
      return "HTTP: Data no longer needed";
    case HTTP3::ErrorCode::HTTP_INCOMPLETE_REQUEST:
      return "HTTP: Stream terminated early";
    case HTTP3::ErrorCode::HTTP_CONNECT_ERROR:
      return "HTTP: Reset or error on CONNECT request";
    case HTTP3::ErrorCode::HTTP_VERSION_FALLBACK:
      return "HTTP: Retry over HTTP/1.1";
    case HTTP3::ErrorCode::HTTP_PUSH_REFUSED:
      return "HTTP: Client refused pushed content";
    case HTTP3::ErrorCode::HTTP_PUSH_ALREADY_IN_CACHE:
      return "HTTP: Pushed content already cached";
    case HTTP3::ErrorCode::HTTP_WRONG_STREAM:
      return "HTTP: A frame was sent on the wrong stream";
    case HTTP3::ErrorCode::HTTP_UNKNOWN_STREAM_TYPE:
      return "HTTP: Unknown unidirectional stream type";
    case HTTP3::ErrorCode::HTTP_WRONG_STREAM_COUNT:
      return "HTTP: Too many unidirectional streams";
    case HTTP3::ErrorCode::HTTP_QPACK_DECOMPRESSION_FAILED:
      return "HTTP: QPACK decompression failed";
    case HTTP3::ErrorCode::HTTP_QPACK_ENCODER_STREAM_ERROR:
      return "HTTP: Error on QPACK encoder stream";
    case HTTP3::ErrorCode::HTTP_QPACK_DECODER_STREAM_ERROR:
      return "HTTP: Error on QPACK decoder stream";
    case HTTP3::ErrorCode::GIVEUP_ZERO_RTT:
      return "Give up Zero RTT";
  }
  LOG(WARNING) << "toString has unhandled ErrorCode";
  return "Unknown error";
}
} // namespace proxygen
