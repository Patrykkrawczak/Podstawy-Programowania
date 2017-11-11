//Napisz funkcję, która otrzymuje 
//jako argument liczbę całkowitą n (n > 3) i zwraca jako wartość największą liczbę pierwszą mniejszą od n (do wyznaczenia wyniku użyj algorytmu sita Eratostenesa).
#include <math.h>

int funkcja(int n){
	int a=sqrt(n);
	int tablica[1000];
	int i=0;
	for(;i<1000;i++){
		tablica[i]=1
	}
	for(i=0;i<a;i++){
		tablica[i]=1
	}
	for(i=2;i<a;i++){
		if(tablica[i]==1){
			int j=i*i;
			for(;j<a;j+i){
				tablica[j]==0;
			}
		}
		return i;
	}
	
	
}