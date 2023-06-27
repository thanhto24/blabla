#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float h,w;
    float H,BMI;
    printf("Nhap chieu cao: ");
    scanf("%f",&h);
    H=h/100;
    printf("Nhap can nang: ");
    scanf("%f",&w);
    BMI = w/(H*H);
    printf("Chi so BMI la: %0.2f\n",BMI);
    return 0;
}
