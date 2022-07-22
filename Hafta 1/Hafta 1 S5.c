const float pi = 3.14;

#include <stdio.h>

float square(const int r);

int main(){

    int r;

    printf("Alanını hesaplamak istyediğiniz dairenin yarıçapını giriniz\n-> ");

    scanf("%d", &r);

    printf("Yarıçapı girilen dairenin alanı: %.2f\n", square(r));
}

float square(const int r){

    float alan;

    return r*r*pi; //hesaplama

}
