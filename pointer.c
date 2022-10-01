#include <stdio.h>

void swap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main()
{
    int start = 96;
    int end   = 5 ;
    if (start > end)
    {
        swap(&start, &end);
    }
    printf("%d and %d", start, end);
}