//find Modulus of a number
#include<stdio.h>
int main(){
    float x;
    printf("Enter the Number :");
    scanf("%f",&x);
    if (x<0) {
        x=x*(-1);
    }
    printf("Absolute value is %f",x);
    return 0;
}