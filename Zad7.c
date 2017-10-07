#include <stdio.h>

int main()
{
int a;
int b;
int c;
float wynik;
printf("podaj a");
scanf("%d",&a);
printf("podaj b");
scanf("%d", &b);
printf("podaj c");
scanf("%d", &c);

wynik=3.0/((1.0/a)+(1.0/b)+(1.0/c));
printf("%f", wynik);
return 0;
}
