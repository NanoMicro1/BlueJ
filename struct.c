#include <stdio.h>

struct gameinfo 
{
    char * name;
    int year;
    int price;
    char * company;

    struct gameinfo * friendGame; // 연관업체게임
};

int main()
{
    //게임 출시
    // 이름 : 나도게임
    // 발매년도 2017년
    // 가격 50원
    //제작사 나도회사

    /* char * name = "1game"; // gameinfo1
    int year = 2017;
    int price = 50;
    char * company = "1game";

    char * name2 = "2game"; // gameinfo2
    int year2 = 2017;
    int price2 = 50;
    char * company2 = "2game"; */

    // 구조체 사용
    struct gameinfo gameinfo1;
    
    gameinfo1.name = "Nadogame";
    gameinfo1.year = 2017;
    gameinfo1.price = 100;
    gameinfo1.company = "nadocompany";

    printf("== Game info ==\n");
    printf("Game name : %s\n", gameinfo1.name);
    printf("Game release date : %d\n", gameinfo1.year);
    printf("Game price : %d\n", gameinfo1.price);
    printf("Game maker : %s\n\n\n", gameinfo1.company);

    struct gameinfo gameinfo2 = {"supergame", 2017, 500, "shotcompany"};
    printf("== Game info ==\n");
    printf("Game name : %s\n", gameinfo2.name);
    printf("Game release date : %d\n", gameinfo2.year);
    printf("Game price : %d\n", gameinfo2.price);
    printf("Game maker : %s\n\n\n", gameinfo2.company);

    struct gameinfo gameArray[2] = {
        {"Nadogame", 2017, 100, "nadocompany"},
        {"supergame", 2017, 500, "shotcompany"}
    };

    //구조체 포인터
    struct gameinfo * gamePtr; // 미션맨
    gamePtr = &gameinfo1;
    printf("== Mission man Game info ==\n");
    printf("Game name : %s\n",         gamePtr->name);
    printf("Game release date : %d\n", gamePtr->year);
    printf("Game price : %d\n",        gamePtr->price);
    printf("Game maker : %s\n",        gamePtr->company);


    // 연관 업체 게임 소개
    gameinfo1.friendGame = &gameinfo2;
    printf("Game name : %s\n",         gameinfo1.friendGame->name);
    printf("Game release date : %d\n", gameinfo1.friendGame->year);
    printf("Game price : %d\n",        gameinfo1.friendGame->price);
    printf("Game maker : %s\n",        gameinfo1.friendGame->company);


    return 0;
}