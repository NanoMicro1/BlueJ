#include <stdio.h>

struct gameinfos // 이 자체로 구조체 완성
{  
    char * name;
    char * company;
    int year;
    int price;
    int profit;
    int employees;
};

int main()
{
    struct gameinfos gameinfo2 = {"HOOOS","blizzard", 2010, 10000, 999, 1149};
    printf("  == ANOTHER Game infos == \n");
    printf(" Game name    : %s\n", gameinfo2.name);
    printf(" Company Name : %s\n", gameinfo2.company);
    printf(" Release date : %d\n", gameinfo2.year);
    printf(" Price        : %d\n", gameinfo2.price);
    printf(" Profit       : %d\n", gameinfo2.profit);
    printf(" Employees    : %d\n", gameinfo2.employees);
}
    /* struct gameinfos gameinfo1;
    gameinfo1.name = "Fortnite";
    gameinfo1.company = "Epicgames";
    gameinfo1.year = 1998;
    gameinfo1.price = 100;
    gameinfo1.profit = 500;
    gameinfo1.employees = 1000;
    
    printf("  == Game infos == \n");
    printf(" Game name    : %s\n", gameinfo1.name);
    printf(" Company Name : %s\n", gameinfo1.company);
    printf(" Release date : %d\n", gameinfo1.year);
    printf(" Price        : %d\n", gameinfo1. price);
    printf(" Profit       : %d\n", gameinfo1.profit);
    printf(" Employees    : %d\n\n", gameinfo1.employees);
   
    struct gameinfos gameinfo2;
    gameinfo2.name = "HOTS";
    gameinfo2.company = "blizzard";
    gameinfo2.year = 999;
    gameinfo2.price = 10000;
    gameinfo2.profit = 999;
    gameinfo2.employees = 1149;

    printf("  == Game infos == \n");
    printf(" Game name    : %s\n", gameinfo2.name);
    printf(" Company Name : %s\n", gameinfo2.company);
    printf(" Release date : %d\n", gameinfo2.year);
    printf(" Price        : %d\n", gameinfo2. price);
    printf(" Profit       : %d\n", gameinfo2.profit);
    printf(" Employees    : %d\n", gameinfo2.employees); */