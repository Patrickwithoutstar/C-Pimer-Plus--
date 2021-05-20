#include <stdio.h>

int main(void){
    unsigned short a = 65535;
    unsigned short b = a+1;

    float c = 1.0E39;
    float d = 1.0000005E10;
// overflow;
    printf("a is %d, b is %d\n",a,b);
    printf("c is %E\n",c);
    printf("d is %E\n",d);
// 
}