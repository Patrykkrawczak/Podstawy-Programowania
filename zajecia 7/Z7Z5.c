//Zadanie 5: Napisz funkcję, która przyjmuje jako parametr adres wskaźnika na double.
// Funkcja zwalnia obszar pamięci wskazywany przez wskaźnik, którego adres dostała, a następnie ustawia wartość tego wskaźnika na NULL.
// W programie testującym sprawdź poprawność funkcji przyrównując wartość wskaźnika do NULL
#include <stdlib.h>
#include <stdio.h>
void funkcja(double *parametr){
	free(parametr);
	*parametr = NULL;
	
}


int main(){
	double a = 5.6;
	funkcja(&a);
	a==NULL ? printf("wszystko dziala") : printf("nie dziala");
	
	
	
	return 0;
}