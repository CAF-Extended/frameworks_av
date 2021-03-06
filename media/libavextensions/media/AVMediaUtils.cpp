/*
 * Copyright (c) 2013 - 2018, The Linux Foundation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *     * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *      with the distribution.
 *     * Neither the name of The Linux Foundation nor the names of its
 *      contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
 * BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
 * IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

//#define LOG_NDEBUG 0
#define LOG_TAG "AVMediaUtils"
#include <utils/Log.h>

#include "common/ExtensionsLoader.hpp"
#include "media/AVMediaExtensions.h"

namespace android {

size_t AVMediaUtils::AudioTrackGetOffloadFrameCount(size_t frameCount) {
    return frameCount;
}

bool AVMediaUtils::AudioTrackIsTrackOffloaded(audio_io_handle_t output __unused) {
    return false;
}

void AVMediaUtils::getCustomProfileLocation(char *, int32_t) {
    return;
}

// ----- NO TRESSPASSING BEYOND THIS LINE ------
AVMediaUtils::AVMediaUtils() {
}

AVMediaUtils::~AVMediaUtils() {
}

//static
AVMediaUtils *AVMediaUtils::sInst =
        ExtensionsLoader<AVMediaUtils>::createInstance("createExtendedMediaUtils");

} //namespace android

