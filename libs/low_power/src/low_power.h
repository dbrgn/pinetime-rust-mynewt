/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */
//  Power Management Functions
#ifndef __LOW_POWER_H__
#define __LOW_POWER_H__
#include <stdint.h>

#ifdef __cplusplus
extern "C" {  //  Expose the types and functions below to C functions.
#endif

///  Return 1 if we have been woken up from Deep Sleep Standby Mode, 0 otherwise.
int power_standby_wakeup(void);

#ifdef __cplusplus
}
#endif
#endif  //  __LOW_POWER_H__