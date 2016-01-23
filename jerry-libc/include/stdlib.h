/* Copyright 2015 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef JERRY_LIBC_STDLIB_H
#define JERRY_LIBC_STDLIB_H

#ifdef __cplusplus
# define EXTERN_C "C"
#else /* !__cplusplus */
# define EXTERN_C
#endif /* !__cplusplus */

extern EXTERN_C void __attribute__ ((noreturn)) exit (int);
extern EXTERN_C void __attribute__ ((noreturn)) abort (void);

/**
 * Maximum integer that could be returned by random number generator
 *
 * See also:
 *          rand
 */
#define RAND_MAX (0x7fffffffu)

extern EXTERN_C int rand (void);
extern EXTERN_C void srand (unsigned int);

#endif /* !JERRY_LIBC_STDLIB_H */