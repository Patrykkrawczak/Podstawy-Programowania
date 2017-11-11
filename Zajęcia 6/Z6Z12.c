// Napisz funkcję, która dostaje jako parametry tablicę liczb całkowitych, jej rozmiar oraz liczbę a. Program powinien do tablicy zapisać liczbę a w systemie dwójkowym
void funkcja(int tab[],int n,int a){
	int j=n-1
	for(;j>=0;j--){
	tab[j]=a%2;
	a=a/2
	}
	
}