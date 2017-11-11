#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int max(int tab[],int n);

int main(){
	srand(time(0));
	int i = 0;
	for(; i < 5 ;i++)
	{
		tablica[i]=rand();
	}
printf("%d",max(tablica,5));
return 0;	
}


int max(int tab[],int n){
int maxymalna=tab[0],int i=0;
	for(;i<n;i++){
		if(tab[i]>maxymalna){maxymalna = tab[i];}
	}
	return maxymalna;
}