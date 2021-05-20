#include <stdio.h>
int main(void){
    double sec_per_year = 3.156E7;
    int age;
    printf("Your age in year:");
    scanf("%d",&age);
    printf("Your age in seconds:%f",age*sec_per_year);
}