#include <time.h>
#include <stdio.h>

struct tm newtime;
time_t aclock;

int main(void)
{
    char buffer[32];
    errno_t errNum;
    time(&aclock);   // Get time in seconds.
    localtime_s(&newtime, &aclock);   // Convert time to struct tm form.

    // Print local time as a string.

    errNum = asctime_s(buffer, 32, &newtime);
    if (errNum != 1)
    {
        printf("Current date and time: %s", buffer);  
    }
    return 0;
}