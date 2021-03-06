/*
 * Copyright 2019 The Emscripten Authors.  All rights reserved.
 * Emscripten is available under two separate licenses, the MIT license and the
 * University of Illinois/NCSA Open Source License.  Both these licenses can be
 * found in the LICENSE file.
 */

#ifndef __wasi_emscripten_helpers_h
#define __wasi_emscripten_helpers_h

// Converts a wasi return code to a musl syscall return code (-1 if
// error, 0 otherwise), and sets errno accordingly.
extern int __wasi_syscall_ret(__wasi_errno_t code);

#endif // __wasi_emscripten_helpers_h
