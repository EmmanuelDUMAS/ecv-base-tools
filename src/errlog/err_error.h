/* err_error.h
 * ----------------------------------------------------------------------------
 * Copyright (c) 2024-2024, Emmanuel DUMAS
 * All rights reserved.
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * * Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * * Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the distribution.
 * * Neither the name of the University of California, Berkeley nor the
 *   names of its contributors may be used to endorse or promote products
 *   derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE REGENTS AND CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ----------------------------------------------------------------------------
 * Error code definition
 * ----------------------------------------------------------------------------
 * History
 * 21/02/2024 E. Dumas : creation
 * ----------------------------------------------------------------------------
 */
#pragma once

#ifndef _ERR_ERROR_H_
#define _ERR_ERROR_H_

/* ----------------------------------------------------------------------------
 * Include
 * ----------------------------------------------------------------------------
 */

/* standard include */
#include <errlog/err_code.h>      /* for using ERR_Code_t */
#include <errlog/err_no_error.h>  /* for eERR_NoError     */

/* ----------------------------------------------------------------------------
 * Code value declaration
 * ----------------------------------------------------------------------------
 */

enum {
    eERR_UnspecifiedError = 1,
    eERR_OverflowValue    = 2
};

#endif  /* _ERR_ERROR_H_ */

/* end of file*/
