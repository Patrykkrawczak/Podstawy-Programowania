//Zadanie 2: Napisz funkcję, która jako parametry przyjmuje wskaźniki na zmienne typu int oraz zwraca adres większej wskazywanej przez parametry wartości.



int *funkcja(int *wsk1,int *wsk2){
	return (*wsk1>*wsk2) ?	wsk1 : wsk2;
	
}