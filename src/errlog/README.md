# ecv-base-tools / errlog


## ERR_Code_t 
Type error code.

Level of use of error code.

*level 0*

Use a int as error code.

This error code have to use by example as return code of a function.

    ERR_Code_t MyFunction(float i, float *pResult)
    {

        return ErrorCode;
    }

*level 1*

In error code, 0 means "No Error".

Other code value than 0 means error.

Standard value for "No Error" is eERR_NoError, define in err_no_error.h

*level 2*

Use standard values for common error.

There is a range for common standard error : from 1 (included) to 1023 (included). An other range is for application error, first value start at 1024.

See err_error.h for standard value.

*level 3*

Use of macro for logging error

    ERR_LOG("msg with %d", InValue);

    ERR_CHK_C()
    ERR_CHK_E()


_C is for "log error and Continue"

_E if for "log error end Exit with error code"


*level 4*

Use an service for logging error in a file



*end of file*

