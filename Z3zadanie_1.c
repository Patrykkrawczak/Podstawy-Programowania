//
//  Z3zadanie_1.c
//  
//
//  Created by Student on 20.10.2017.
//
//

#include <stdio.h>

float trojkat(float a, float h)
{
    return (a*h)/2.0;
}

int main()
{
    float a;
    float h;
    scanf("%f %f", &a, &h);
    printf("%f",trojkat(a,h));
    return 0;
}
