//
//  z2_zad7.c
//  
//
//  Created by Student on 13.10.2017.
//
//

#include <stdio.h>
int main(){
    int liczba;
	int dzielnik;

	printf("podaj liczbq");
	scanf("%d",liczba);
	for(int i=0;i<liczba;i++){
		dzielnik=liczba%i;
		if(dzielnik!=0){
		}else{printf("%d",i);}
	}
    
    
    
    
    
    return 0;
}
