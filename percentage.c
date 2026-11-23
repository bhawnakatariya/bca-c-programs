#include<stdio.h>
int main(){
    float m1 = 46; // marks obtained in subject 1
    float m2 = 59; // marks obtained in subject 2
    float m3 = 78; // marks obtained in subject 3
    float m4 = 72; // marks obtained in subject 4
    float m5 = 90; // marks obtained in subject 5
    float p = (m1+m2+m3+m4+m5)/5; // percentage calculations
    printf("Percentage of 5 subjects : %f", p);
    return 0;
}