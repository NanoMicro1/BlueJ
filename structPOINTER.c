#include <stdio.h>

struct gameinfos // 이 자체로 구조체 완성
{  
    char * name;
    char * company;
    int year;
    int price;
};

int main()
{
    struct gameinfos gameinfo1;
    gameinfo1.name = "Fortnite";
    gameinfo1.company = "Epicgames";
    gameinfo1.year = 1998;
    gameinfo1.price = 100;

    struct gameinfos gameinfo2 = {"OS","blizzard", 2010, 10000};
    printf("  == ANOTHER Game infos == \n");
    printf(" Game name    : %s\n", gameinfo2.name);
    printf(" Company Name : %s\n", gameinfo2.company);
    printf(" Release date : %d\n", gameinfo2.year);
    printf(" Price        : %d\n", gameinfo2.price);
    
    struct gameinfos gameArray[2] = 
    {
        {"HOOOS","blizzard", 2010, 10000},
        {"stone","blizzard", 2010, 10000}
    };

    struct gameinfos * gamePtr;
    gamePtr = &gameinfo1;
    printf("  == mission ANOTHER Game infos == \n");
    printf(" Game name    : %s\n", (*gamePtr).name);
    printf(" Company Name : %s\n", (*gamePtr).company);
    printf(" Release date : %d\n", (*gamePtr).year);
    printf(" Price        : %d\n", (*gamePtr).price);


}