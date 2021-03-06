/*
 * Copyright 2017 Hyperkernel Authors
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
 */

#include "Emitter.hh"

#include <sstream>

namespace irpy {

void Emitter::line(const std::string &ref) const
{
    for (auto i = 0; i < indent_level_; ++i)
        stream_ << "  ";
    stream_ << ref << std::endl;
}

void Emitter::line(void) const
{
    stream_ << std::endl;
}

} // namespace irpy
