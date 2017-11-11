void funkcja(int tab1[],int tab2[],int tab3[],int n){
		int i=0;
		for(;i<n*2;i++){
			if(i%2==0){
				tab1[i]=tab2[i/2];
			}else tab1[i]=tab3[i/2];
			}
	
	
}