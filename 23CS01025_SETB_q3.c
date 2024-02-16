#include<stdio.h>

int main(){

    int x, y, x1, y1, r;
    printf("Enter center:");
    scanf("%d%d", &x, &y);
    printf("Enter a point:");
    scanf("%d%d", &x1, &y1);
    printf("Enter radius:");
    scanf("%d%d", &r);

    if((((x-x1)*(x-x1)) + ((y-y1)*(y-y1)))<r*r ){
        printf("The point lies inside the circle");
    } else if((((x-x1)*(x-x1)) + ((y-y1)*(y-y1)))==r*r){
        printf("The point lies on the circle");
    }else{
        printf("The point lies outside the circle");};

        return 0;
}