#include <stdio.h>

struct golfGTI
{
    char * name;
    char * trim;
    int year;
    int horsepower;
    int price;
    int mileage;
};

int main()
{
    struct golfGTI specs;
    
    specs.name = "Golf GTI";
    specs.trim = "autobahn";
    specs.year = 2018;
    specs.horsepower = 190;
    specs.price = 24000;
    specs.mileage = 99000;

    printf("Name       : %s \n", specs.name);
    printf("trim       : %s \n", specs.trim);
    printf("year       : %d \n", specs.year);
    printf("horsepower : %d \n", specs.horsepower);
    printf("price      : %d \n", specs.price);
    printf("mileage    : %d kms \n", specs.mileage);
}