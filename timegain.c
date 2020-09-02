#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>


int time_begin()
{
	int time_begn;
    struct timeval tv;
    gettimeofday(&tv, NULL);
    time_begn = tv.tv_sec * 1000000 + tv.tv_usec;
    return time_begn;
}

int time_end()
{
	int time_end;
    struct timeval tv;
    gettimeofday(&tv, NULL);
    time_end = tv.tv_sec * 1000000 + tv.tv_usec;
    return time_end;
}

// Test the coding.
// int main()
// {
//     int x,y,z,i,sum;
//     sum = 0;
//     x = time_begin();
//     for (i = 0; i < 10000; i++)
//     {
//         sum+=i;
//     }
//     y = time_end();
//     z = y - x;
//     printf("time difference is : %ld\n", z);
// }


//  tips:
//    printf("second: %ld\n", tv.tv_sec); // 秒
//    printf("millisecond: %ld\n", tv.tv_sec * 1000 + tv.tv_usec / 1000); // 毫秒
//    printf("microsecond: %ld\n", tv.tv_sec * 1000000 + tv.tv_usec); // 徽秒