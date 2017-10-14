//
//  z2_Zad2.c
//  
//
//  Created by Student on 13.10.2017.
//
//

#include <stdio.h>
#include <math.h>
int main()
{
float a;
float b;
float c;
float x1;
float x2;
float delta;
printf("podaj a");
scanf("%f", &a); 
printf("podaj b");
scanf("%f", &b);   
printf("podaj c");
scanf("%f", &c);    
delta = 1.0*b*b-4*a*c;
if( delta>0)
{
	x1=(-1.0*b - sqrt(delta))/2.0*a;
	x2=(-1.0*b + sqrt(delta))/2.0*a;
	printf("pierwszy pierwiastek %f\n drugi pierwiastek %f\n",x1,x2);
}else if(delta==0)
{
	x1=(-1.0*b - sqrt(delta))/2.0*a;
	printf("pierwiastek = %f",x1);
}else 
{
	printf("DELTA MNIEJSZA OD ZERA!!!!\n brak wyniku xd");
}
    return 0;
}
