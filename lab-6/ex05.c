#include <stdio.h>
struct Time {
    int min;
    int sec;
};

int main() 
{
    int i;
    struct Time time[3]; 
    int totalseconds = 0;
    for (i = 0; i < 3; i++) 
    {
        printf("Time input (m:s): ");
        scanf("%d:%d", &time[i].min, &time[i].sec);

       
        totalseconds += (time[i].min*60) + time[i].sec;
    }

    printf("Total time elapsed: %d second(s).", totalseconds);
    return 0;
}
