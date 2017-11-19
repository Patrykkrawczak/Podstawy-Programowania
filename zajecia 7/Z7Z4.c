//Zadanie 4: Napisz bezparametrową funkcję, która rezerwuje pamięć na pojedynczą zmienną typu float i zwraca adres zarezerwowanego obszaru pamięci.

#include <stdlib.h>

float *funkcja(){
	float *zmienna = (float *) malloc(sizeof(float*));
		
	return zmienna;
}