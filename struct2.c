#include <stdio.h>

struct Gameinfo // 이렇게하면 게임인포라는 구조체가 만들어진것이다
{
    char * name;
    int year;
    int price;
    char * company;

};

int main()
{

    // (첫번째 게임 회사)
    char * name = "diablo";
    int year = 1998;
    int price = 100;
    char * company = "blizzard";

    // (두번째 게임 회사)
    char * name2 = "fallguys";
    int year2 = 2018;
    int price2 = 200;
    char * company2 = "epicgames";

    // 구조체 사용
    struct Gameinfo gameinfo1; // (struct Gameinfo)가 자료형이고 둘이 항상 붙어있는다, gameinfo1이 변수명
    gameinfo1.name = "diablo";
    gameinfo1.year = 1998;
    gameinfo1.price = 100;
    gameinfo1.company = "blizzard";
    
    struct Gameinfo gameinfo2;
    gameinfo2.name = "hS";
    gameinfo2.year = 2010;
    gameinfo2.price = 19921;
    gameinfo2.company = "blizzard";
    
    //구조체 출력
    printf("=== Game info ===\n");
    printf(" Name of the game : %s\n", gameinfo1.name);
    printf(" year             : %d\n", gameinfo1.year);
    printf(" price            : %d\n", gameinfo1.price);
    printf(" company          : %s\n", gameinfo1.company);
    
    printf("=== Game info ZZZ===\n");
    printf(" Name of the game : %s\n", gameinfo2.name);
    printf(" year             : %d\n", gameinfo2.year);
    printf(" price            : %d\n", gameinfo2.price);
    printf(" company          : %s\n", gameinfo2.company);

}