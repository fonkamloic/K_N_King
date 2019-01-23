//Nane: volphere
//Purpose: computes the volume of a sphere
//date created: 2 dec 2016

#include <stdio.h>

#define PI 3.141592

int main(void) // start of program
{
    float radius, volume;
    printf("Please enter radius of sphere to be calculated: ");
    scanf("%f", &radius );
    volume = (4.0f / 3.0f) * PI * radius * radius * radius;
    printf("The volume of a sphere of radius %.2f is %.2f\n" , radius, volume );
    return 0;
}
