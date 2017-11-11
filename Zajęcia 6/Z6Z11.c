#include <math.h>

int funkcja(int tab[],int n){
	int i=n-1;
	int liczba=0;
	for(;i>=0;i--){
		if(tab[i]==1){
			liczba=liczba+pow(2,i);
			
		}
		
		
	}
	return liczba;
	
}