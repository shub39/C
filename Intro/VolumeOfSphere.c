//Find volume of a sphere
#include<stdio.h>
int main(){
    float radius;
    printf("Type a Number : \n");
    scanf("%f", &radius);
    float pi = 3.14159;
    float volume = 4/3*pi*radius*radius*radius;
    printf ("The Volume is : %f", volume);
    return 0;
}
