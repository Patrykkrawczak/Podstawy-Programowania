



bool czy_sie_powtarza(int tab[],int liczba,int n){
	int i=0;
	int licznik=0;
	
	for(i=0;i<n;i++){
		if(tab[i]==liczba){++licznik;}
		
	}
	if(licznik>=2){return true;}else return false;
}

void funkcja(int tab[],int n){
	int i=n-1;
	for(;i>=0;i--){
		if(czy_sie_powtarza(tab,tab[i],n)){tab[i]=0;}
	}
}
