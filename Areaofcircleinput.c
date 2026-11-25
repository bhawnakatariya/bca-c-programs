#include<stdio.h>
int main(){
    float r;
    printf("enter the radius of circle:");
    scanf("%f",&r);
    float pi = 3.14;
    float area = pi*r*r;
    printf("Area of circle is %f",area);
    return 0;
}