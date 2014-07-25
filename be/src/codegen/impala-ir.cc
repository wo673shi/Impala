// Copyright 2012 Cloudera Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Includes source files for cross compiling to IR.  By having all of the code in
// one .cc file, clang will be able to compile all of code into one module.
// All cross compiled code needs to be added to this file.
// All files here must be added explicitly to the codegen/CMakeLists.txt dependency list

#ifdef IR_COMPILE
#include "exec/aggregation-node-ir.cc"
#include "exec/hash-join-node-ir.cc"
#include "exec/hdfs-avro-scanner-ir.cc"
#include "exec/hdfs-scanner-ir.cc"
#include "exprs/aggregate-functions.cc"
#include "exprs/expr-ir.cc"
#include "exprs/udf-builtins.cc"
#include "runtime/string-value-ir.cc"
#include "udf/udf.cc"
#include "util/hash-util-ir.cc"
#include "exprs/timestamp-functions.cc"
#include "exprs/like-predicate.cc"
#else
#error "This file should only be used for cross compiling to IR."
#endif

