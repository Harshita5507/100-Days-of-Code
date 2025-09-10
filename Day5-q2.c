//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
# include <math.h>
# include <stdio.h>
int main () {
    int total_Seconds, hours,seconds,minutes;

    printf("enter time in seconds: ");
    scanf("%d", &total_Seconds);

    hours= seconds/3600;
    total_Seconds= total_Seconds % 3600;

    minutes= total_Seconds/60;
    seconds= total_Seconds % 60;

    printf("hours:minutes:seconds- %02d %02d %02d", hours, minutes, seconds);
    
    return 0;
}
