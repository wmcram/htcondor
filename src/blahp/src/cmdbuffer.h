/*
#  File:     cmdbuffer.h
#
#  Author:   David Rebatto
#  e-mail:   David.Rebatto@mi.infn.it
#
#
#  Revision history:
#   25 Aug 2011 - Original release
#
#  Copyright (c) Members of the EGEE Collaboration. 2007-2010.
#
#    See http://www.eu-egee.org/partners/ for details on the copyright
#    holders.
#
#    Licensed under the Apache License, Version 2.0 (the "License");
#    you may not use this file except in compliance with the License.
#    You may obtain a copy of the License at
#
#        http://www.apache.org/licenses/LICENSE-2.0
#
#    Unless required by applicable law or agreed to in writing, software
#    distributed under the License is distributed on an "AS IS" BASIS,
#    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#    See the License for the specific language governing permissions and
#    limitations under the License.
#
*/

#define CMDBUF_OK               0
#define CMDBUF_TIMEOUT          1
#define CMDBUF_ERROR_NOMEM      2
#define CMDBUF_ERROR_NOBUFFER   3
#define CMDBUF_ERROR_POLL       4
#define CMDBUF_ERROR_READ       5

/* Exported functions */
int cmd_buffer_init(const int fd, const size_t bufsize, const int timeout);
int cmd_buffer_get_command(char **command);
int cmd_buffer_free(void);
