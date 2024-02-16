#include<stdio.h>

int main(){

    float r, h, vol, surfacear, pie=3.14;
    printf("Enter radius and height:");
    scanf("%f%f", &r, &h);

    vol = pie*r*r*h;
    surfacear = 2*pie*r*(r+h);

    printf("\nThe volume is vol = %.2f", vol);
    printf("\nThe surface area is surfacear = %.2f", surfacear);

    return 0;

    
}