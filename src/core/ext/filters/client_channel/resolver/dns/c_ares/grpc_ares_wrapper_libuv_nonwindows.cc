/*
 *
 * Copyright 2016 gRPC authors.
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
 *
 */

#include <grpc/support/port_platform.h>

#include "src/core/lib/iomgr/port.h"
#if GRPC_ARES == 1 && defined(GRPC_UV) && !defined(GPR_WINDOWS)

#include <grpc/support/string_util.h>

#include "src/core/ext/filters/client_channel/parse_address.h"
#include "src/core/ext/filters/client_channel/resolver/dns/c_ares/grpc_ares_wrapper.h"
#include "src/core/ext/filters/client_channel/resolver/dns/c_ares/grpc_ares_wrapper_windows_inner.h"
#include "src/core/ext/filters/client_channel/server_address.h"
#include "src/core/lib/gpr/host_port.h"
#include "src/core/lib/gpr/string.h"

bool grpc_ares_maybe_resolve_localhost_manually_locked(
    const char* name, const char* default_port,
    grpc_core::UniquePtr<grpc_core::ServerAddressList>* addrs) {
  return false;
}

#endif /* GRPC_ARES == 1 && defined(GRPC_UV) */
