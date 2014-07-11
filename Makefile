
# @@@ START COPYRIGHT @@@
#
# (C) Copyright 2007-2014 Hewlett-Packard Development Company, L.P.
#
#  Licensed under the Apache License, Version 2.0 (the "License");
#  you may not use this file except in compliance with the License.
#  You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
#  Unless required by applicable law or agreed to in writing, software
#  distributed under the License is distributed on an "AS IS" BASIS,
#  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
#  See the License for the specific language governing permissions and
#  limitations under the License.
#
# @@@ END COPYRIGHT @@@

# Default version number
# daily, pre-release, & release builds are named based on build ID (tag or date)
# Version identifier is two parts:
#  * Trafodion version supported
#  * Installer version number (starting from 1 for each Trafodion version)
#
# "v000" indicates an internal/development version of installer
RELEASE_VER ?= 0.8.3_v000

all: pkg-installer 

pkg-installer: 
	tar czf installer-$(RELEASE_VER).tar.gz installer

version:
	@echo "$(RELEASE_VER)"

clean:
	rm installer-$(RELEASE_VER).tar.gz
