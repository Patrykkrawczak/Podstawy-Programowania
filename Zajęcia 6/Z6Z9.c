

int funkcja(int tab[],int n){
	int i=0;
	int zamiennik[n];
	for(;i<n;i++){
	zamiennik[i]=tab[i];
	}
	int max=zamiennik[0];
	for(i=0;i<n;i++){
	if(max<zamiennik[i]){
		max=zamiennik[i];
	}
	}
	for(i=0;i<n;i++){
	if(max==zamiennik[i]){
		zamiennik[i]=0;
	}
	}
	int max=zamiennik[0];
	for(i=0;i<n;i++){
	if(max<zamiennik[i]){
		max=zamiennik[i];
	}
	}
	for(i=0;i<n;i++){
	if(max==tab[i]){
		return i;
	}
	}
	
	
	
}