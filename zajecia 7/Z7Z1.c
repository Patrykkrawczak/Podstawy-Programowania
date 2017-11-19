//Zadanie 1: Napisz funkcję, która jako parametry przyjmuje wskaźniki na zmienne typu int oraz zwraca maksimum wartośći tych zmiennych.

int funkcja(int *wsk1,int *wsk2){
	return (*wsk1>*wsk2) ?	*wsk1 : *wsk2;
	
}