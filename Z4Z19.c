//
//  Z4Z3.c
//  
//
//  Created by Student on 27.10.2017.
//
int a(int n){
	if(n<6){
		return n;
		
	}
	if(n>=6){
		int licznik=0;
		for(int i=0;i<3;i++){
			licznik = licznik + a((n-2*i));
			
		}
		return licznik;
	}
	
}