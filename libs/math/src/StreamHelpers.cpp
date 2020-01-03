/*
 * Copyright 2020 The Android Open Source Project
*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <math/vec2.h>
#include <math/vec3.h>
#include <math/vec4.h>
#include <math/mat2.h>
#include <math/mat3.h>
#include <math/mat4.h>
#include <math/quat.h>

#include <ostream>

namespace filament {
namespace math {
namespace details {

template<typename T>
std::ostream& printVector(std::ostream& stream, const T* data, size_t count) {
    stream << "< ";
    for (size_t i = 0; i < count - 1; i++) {
        stream << data[i] << ", ";
    }
    stream << data[count - 1] << " >";
    return stream;
}

template<template<typename T> class BASE, typename T>
std::ostream& printQuat(std::ostream& stream, const BASE<T>& q) {
    return stream << "< " << q.w << " + " << q.x << "i + " << q.y << "j + " << q.z << "k >";
}

template std::ostream& printVector(std::ostream& stream, const double* data, size_t count);
template std::ostream& printVector(std::ostream& stream, const float* data, size_t count);
template std::ostream& printVector(std::ostream& stream, const int* data, size_t count);
template std::ostream& printVector(std::ostream& stream, const half* data, size_t count);

template std::ostream& printQuat(std::ostream& stream, const quath& q);
template std::ostream& printQuat(std::ostream& stream, const quatf& q);
template std::ostream& printQuat(std::ostream& stream, const quat& q);

}  // namespace details
}  // namespace math
}  // namespace filament
