// Copyright 2021-present StarRocks, Inc. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <iomanip>

#include "column/column_builder.h"
#include "column/column_viewer.h"
#include "exprs/function_context.h"
#include "exprs/function_helper.h"
#include <velocypack/vpack.h>

#include <utility>

#include "common/compiler_util.h"

namespace starrocks {
    enum class IPConvertExceptionMode : uint8_t {
        Throw, Default, Null
    };

//    class IpFunctions {
//    public:
//        /**
//         * @param: [string_value]
//         * @paramType: [BinaryColumn]
//         * @return: BigIntColumn
//         */
//        template <IPConvertExceptionMode exception_mode, typename ToColumn>
//        DEFINE_VECTORIZED_FN(inet_aton);
//    };

} // namespace starrocks
