#include <stdio.h>
#include <stdbool.h>

bool funkcja(){
	int tablica[5];
	int suma=0,i=0,a;
	for(;i<5;i++){
		scanf("%d",a);
		tablica[i]=a;
		suma = suma + a*a;
	}
	if(suma>30){return true; }else return false;
	
	
}