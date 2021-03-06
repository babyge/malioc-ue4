/*
* Copyright 2015 ARM Limited
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include "ModuleManager.h"
#include "MaterialEditorModule.h"

DECLARE_LOG_CATEGORY_EXTERN(MaliOfflineCompiler, Log, All)

/** @return the full path to the Mali Offline Compiler Plugin folder (i.e. where all the resources are located) */
const FString& GetMaliOCPluginFolderPath();