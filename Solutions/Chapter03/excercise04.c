#include <stdio.h>

int main(void)
{
    float n;
    printf("Enter a floating-piont value:");
    scanf("%f", &n);
    printf("fixed-point notation: %f\n",n);
    printf("exponential notation: %e\n",n);
    printf("p notaion: %a \n",n);
}