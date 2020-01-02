/*
 * Copyright (C) 2019 The Android Open Source Project
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

package com.google.android.filament.gltfio;

/**
 * Opaque memento to a viewing position and orientation (e.g. the "home" camera position).
 *
 * \see Manipulator#getCurrentBookmark, Manipulator#jumpToBookmark
 */
public class Bookmark {
    private long mNativeObject;

    /**
     * Interpolates between two bookmarks. The t argument must be between 0 and 1 (inclusive), and
     * the two endpoints must have the same mode (ORBIT or MAP).
     */
    static Bookmark interpolate(Bookmark a, Bookmark b, double t) {
        return null;
    }

    /**
     * Recommends a duration for animation between two MAP endpoints. The return value is a unitless
     * multiplier.
     */
    static double duration(Bookmark a, Bookmark b) {
        return 0;
    }
}
