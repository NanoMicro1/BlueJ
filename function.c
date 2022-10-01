#include <stdio.h>

void p (int num); // parameter는 함수선언의 변수

int main()
{
   int num = 2;

   p(num);
   num += 3;
   
    // function argument는 여기로 보내는 실제 데이터
}

void p (int num)
{
    printf("num is %d\n", num);
}