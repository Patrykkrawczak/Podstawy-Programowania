#include <stdio.h>

bool czy_liczba(int tab[],int liczba,int kolej);
void funkcja(int tab[]){
	int i=0;
	int j;
	int zapisana=0
	for(;i<10;){
		scanf("%d",zapisana);
		if(i==0){tab[i]=zapisana;i++;}
		if(!czy_liczba(tab,zapisana,i)){
			tab[i]=zapisana; i++;
		}else {
			int j;
		printf("koleś już podawałeś tą liczbę - patrz:\n");
			for(j=0;j<i;j++){
				printf("%d "tab[j]);
			}
			printf("\nPodaj nową wartość : - )");
		}
	
	
}
}
bool czy_liczba(int tab[],int liczba,int kolej){
	int k=0;
	for(;k<kolej;k++){
		if(tab[k]==liczba){return true;}
		
	}
	return false;
	
	
}