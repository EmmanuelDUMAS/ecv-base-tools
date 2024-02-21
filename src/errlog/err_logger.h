/* err_logger.h
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
 * history
 * 21/02/2024 E. Dumas : creation
 * ----------------------------------------------------------------------------
 */

#ifndef _ERR_LOGGER_H_
#define _ERR_LOGGER_H_


/* ----------------------------------------------------------------------------
 * Include
 * ----------------------------------------------------------------------------
 */

/* standard include */
#include <errlog/err_code.h>  /* for using ERR_Code_t */
#include <errlog/err_no_error.h>  /* for using eERR_NoError */

/* ----------------------------------------------------------------------------
 * Define
 * ----------------------------------------------------------------------------
 */

#define STRINGIZE(x) STRINGIZE2(x)
#define STRINGIZE2(x) #x
#define LINE_STRING STRINGIZE(__LINE__)

#define ERR_LOG(MSG, ...) { printf(__FILE__ "(" LINE_STRING ") " MSG "\n", ##__VA_ARGS__); }

#define ERR_CHK_C(ERR) { \
    if ((ERR)!=eERR_NoError) { printf(__FILE__ "(" LINE_STRING ") Error code=%d\n", (ERR)); } \
}

#define ERR_CHK_E(ERR) { \
    if ((err)!=eERR_NoError) { printf(__FILE__ "(" LINE_STRING ") Error code=%d - exit\n", (ERR)); return (ERR);} \
}

#define ERR_CHK_MSG_C(ERR, MSG, ...) { \
    if ((err)!=eERR_NoError) { printf(__FILE__ "(" LINE_STRING ") " MSG "\n", (ERR), ##__VA_ARGS__); } \
}

#define ERR_CHK_MSG_E(ERR, MSG, ...) { \
    if ((err)!=eERR_NoError) { printf(__FILE__ "(" LINE_STRING ") " MSG "\n", (ERR), ##__VA_ARGS__; return (ERR);} \
}

#define ERR_IF_C(COND, ERR) { \
    if (COND) { printf(__FILE__ "(" LINE_STRING ") Error code=%d\n", (ERR)); } \
}

#define ERR_IF_E(COND, ERR) { \
    if (COND) { printf(__FILE__ "(" LINE_STRING ") Error code=%d - exit\n", (ERR)); return (ERR);} \
}

#define ERR_IF_MSG_C(COND, ERR, MSG, ...) { \
    if (COND) { printf(__FILE__ "(" LINE_STRING ") " MSG "\n", (ERR), ##__VA_ARGS__); } \
}

#define ERR_IF_MSG_E(COND, ERR, MSG, ...) { \
    if (COND) { printf(__FILE__ "(" LINE_STRING ") " MSG "\n", (ERR), ##__VA_ARGS__; return (ERR);} \
}



#endif /* _ERR_LOGGER_H_ */

/* end of file */
