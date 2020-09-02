#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>
#include "timegain.h"

// Test the coding.
int main()
{
    int x,y,z,i,sum;
    sum = 0;
    x = time_begin();
    for (i = 0; i < 10000; i++)
    {
        sum+=i;
    }
    y = time_end();
    z = y - x;
    printf("time difference is : %ld\n", z);
}