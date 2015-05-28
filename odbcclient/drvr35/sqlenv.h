// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2003-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
//
//
#ifndef SQLENV_H
#define SQLENV_H

#include <windows.h>
#include <sql.h>

namespace ODBC {

SQLRETURN  SetEnvAttr(SQLHENV EnvironmentHandle,
           SQLINTEGER Attribute,
		   SQLPOINTER Value,
           SQLINTEGER StringLength);
SQLRETURN  GetEnvAttr(SQLHENV EnvironmentHandle,
           SQLINTEGER Attribute, 
		   SQLPOINTER Value,
           SQLINTEGER BufferLength, 
		   SQLINTEGER *StringLength);
}

#endif
