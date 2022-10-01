#include <stdio.h>

int main()
{
    int second;
    int minute;
    int hour;
    int day;

    printf("How many seconds do you want to change?\n");
    scanf("%d", &second);

    printf("%d seconds are %.2f minutes, %d hours, %d day(s)", second, (double)second/60, 
    second/3600, (double)second/86400);
}

// 하루는 86400초
// 1시간은 3600초