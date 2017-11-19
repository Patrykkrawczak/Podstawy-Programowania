//Zadanie 6: Napisz program, który wczyta od użytkownika liczbę całkowitą n,
// dynamicznie zaalokuje tablicę n liczb zmiennoprzecinkowych, wczyta je wszystkie od użytkownika,
// wypisze ich maksimum, minimum, średnią i sumę, a następnie zwolni pamięć zajmowaną przez tę tablicę.

#include <stdio.h>
#include <stdlib.h>


int main(){
	int n;
	scanf("%d",&n);
	float *tab = (float *) malloc(n*sizeof(float*));
	int i=0;
	float max=0, min=0, suma=0, srednia=0;
	for(;i<n;i++){
		scanf("f",*(tab+i));
		if(i==0){max=*tab; min=*tab;}
		max<*(tab+i) ? max = *(tab+i)*1.0 : ;
		min>*(tab+i) ? min = *(tab+i)*1.0 : ;
		suma = suma + *(tab + i)*1.0;

		
		
	}
	srednia = suma/n*1.0
	printf("max: %f\nmin: %f\nsuma: %f\nsrednia: %f\n", max,min,suma,srednia);
	return 0;
	
}