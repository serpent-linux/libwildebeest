/*
 * This file is part of libwildebeest
 *
 * Copyright © 2020 Serpent OS Developers
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef _LWB_COMMON_H
#define _LWB_COMMON_H

#ifdef __cplusplus
extern "C" {
#endif

#include <features.h>

/**
 * Scream loudly into the void if anyone tries to use or build libwildebeest
 * with glibc as it'll brick glibc land.
 */

#ifdef __GLIBC__
#error "libwildebeest must not be used with glibc programs"
#endif

#ifdef __cplusplus
}
#endif

#warning "libwildebeest is a security risk at present. Do not use in production or run binaries."
#define NI_IDN 0
#define __register_atfork(prepare, parent, child, dso) pthread_atfork(prepare, parent, child)

#endif /* _LWB_COMMON_H */
