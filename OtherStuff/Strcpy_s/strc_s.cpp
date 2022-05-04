#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char occupationOne[50] = "Nurse";
    char occupationZero[50];

    // The guy in the video comment here that the error he got is acctually just a warning. The error/warning is copied bellow the main.
    strcpy_s(occupationZero, occupationOne);

    cout << "Rose is a " << occupationZero << endl;

    return 0;

}

/*             This is the error/warning the guy on the video got.
******************************************************************************************
* 'strcpy': This function or variable may be unsage. Consider using strcpy_s             *
* instead. To disabledeprecation, use_CRT_SECURE_NO_WARNINGS> See online cplusplusstrcpy *
* help for details.                                                                      *
*****************************************************************************************
*/

// I still do not understand what the hell this does? Is it copying the data onto occupationZero array? Probably.

// Then the guy just change the 'strcpy' to 'strcpy_s' and run it normally. Don't know why.
// I was able to run it ithout the warning here on VSCode. If I change it like he did it I get an error. The error explained bellow

/*                           This is the error/warning I got after adding the strcpy_s.
*********************************************************************************************************************************
* strc_s.cpp:12:5: error: use of undeclared identifier 'strcpy_s'; did you mean 'strcpy'?                                       *
*    strcpy_s(occupationZero, occupationOne); -- With wiggling lines under strcpy                                               *
* /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/string.h:79:7:     *
* note: 'strcpy' declared here                                                                                                  *
* char    *strcpy(char *__dst, const char *__src);                                                                              *
* 1 error generated. -- with a ^ underneath the 's' of strcpy now a pointer                                                     *
*********************************************************************************************************************************
*/

// Seems as the profesor told us that is tied to pointers and dinamic allocated memory. 