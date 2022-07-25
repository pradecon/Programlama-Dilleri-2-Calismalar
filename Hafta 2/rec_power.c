#include <stdio.h>

int powerof(int, int);

int main()
{
    int number, ofpower, result;

    printf("sayıyı giriniz: ");
    scanf("%d",&number);

    printf("kuvveti giriniz: ");
    scanf("%d",&ofpower);

    result = powerof(number, ofpower);

    printf("sonuç: %d\n", result);
}

int powerof(int number, int power)
{
    if(power==1)
        return number;
    else
        return number * powerof(number, power-1);
}
