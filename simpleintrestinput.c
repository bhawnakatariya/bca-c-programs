#include<stdio.h>
int main(){
    float p,r,t;
    printf("enter the principle amout:");
    scanf("%f",&p);
    printf("enter the intrest rate:");
    scanf("%f",&r);
    printf("enter the time period:");
    scanf("%f",&t);
    float si = (p*r*t)/100;
    printf("the simple interest is: %f",si);
    return 0;
}