/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#pragma once

#include "cmConfigure.h" // IWYU pragma: keep

#include <string>
#include <vector>

#include <cm3p/json/value.h>

class cmake;
class cmGlobalGenerator;

extern void cmGetCMakeInputs(const cmGlobalGenerator* gg,
                             const std::string& sourceDir,
                             const std::string& buildDir,
                             std::vector<std::string>* internalFiles,
                             std::vector<std::string>* explicitFiles,
                             std::vector<std::string>* tmpFiles);

extern Json::Value cmDumpCodeModel(const cmake* cm);
extern Json::Value cmDumpCTestInfo(const cmake* cm);
extern Json::Value cmDumpCMakeInputs(const cmake* cm);
