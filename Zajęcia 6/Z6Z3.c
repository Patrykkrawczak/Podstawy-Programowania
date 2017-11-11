#include <stdio.h>
void funkcja(){
	float tablica[5];
	int i; float a, suma=0, srednia=0;
	for(i=0;i<5;i++){
		scanf("%f",&a);
		tablica[i]=a;
		suma = suma*1.0 + a*1.0;
	}
	srednia = suma/5.0;
	printf("suma: %f\nsrednia: %f\n",suma,srednia);
}