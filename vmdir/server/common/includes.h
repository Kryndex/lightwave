/*
 * Copyright © 2012-2015 VMware, Inc.  All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the “License”); you may not
 * use this file except in compliance with the License.  You may obtain a copy
 * of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an “AS IS” BASIS, without
 * warranties or conditions of any kind, EITHER EXPRESS OR IMPLIED.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 */

#ifndef _WIN32
#include <config.h>

#include <execinfo.h>
#include <vmdirsys.h>

// OpenLDAP ber library include files
#include <lber.h>
#include <ldap.h>
#include <ldap_log.h>
#include <lber_pvt.h>
#include <lber-int.h>

#include <uuid/uuid.h>

#include <sasl/sasl.h>
#include <sasl/saslutil.h>

#include <openssl/sha.h>
#include <openssl/rand.h>

#include <vmdir.h>
#include <vmdirtypes.h>
#include <vmdirdefines.h>
#include <vmdirerrors.h>
#include <vmdirerrorcode.h>

#include <vmdircommon.h>
#include <srvcommon.h>

#include <vmsuperlogging.h>
#include <vmdirserver.h>
#include <ldaphead.h>
#include <schema.h>
#include <vmacl.h>

#include <backend.h>
#include <middlelayer.h>

#else

#pragma once
#include "targetver.h"
#include <windows.h>
#include <stdint.h>
#include <assert.h>
#include <stddef.h>
#include <stdlib.h>
#include <tchar.h>

#include <lber.h>
#include <ldap.h>
#include <ldap_log.h>
#include <lber_pvt.h>
#include <lber-int.h>

#include <sasl/sasl.h>
#include <sasl/saslutil.h>

#include <openssl/sha.h>
#include <openssl/rand.h>

#define LW_STRICT_NAMESPACE
#include <lw/types.h>
#include <lw/hash.h>
#include <lw/security-types.h>

#include <vmdir.h>
#include <vmdirtypes.h>
#include <vmdirdefines.h>
#include <vmdirerrors.h>
#include <vmdirerrorcode.h>

#include <vmdircommon.h>
#include <srvcommon.h>

#include <vmdirserver.h>
#include <ldaphead.h>
#include <schema.h>
#include <vmacl.h>

#include <backend.h>
#include <middlelayer.h>
#include "banned.h"

#endif
#include <csrp/srp.h>


