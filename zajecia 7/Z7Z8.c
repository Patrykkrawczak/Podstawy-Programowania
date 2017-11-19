//Zadanie 8: Napisz funkcję, która przyjmuje 4 argumenty: 2 wskąźniki na liczby całkwoite x oraz y,
// a także 2 zmienne całkwoite typu int a oraz b. Funkcja ma zwracać jako wartość sumę liczb a oraz b wtedy i tylko wtedy,
// gdy x oraz y wskazują na to samo, lub iloczyn liczb a i b w przeciwnym wypadku.

int funkcja(int *x, int *y, int a, int b){
	return *x==*y ? a+b : a*b;	
}