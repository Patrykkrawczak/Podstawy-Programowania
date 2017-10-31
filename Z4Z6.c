//
//  Z4Z3.c
//  
//
//  Created by Student on 27.10.2017.
//
//

int fun(int n){
	int pierwsza=0;
	int i=0;
	if(n==1){
		return 2;
	}
	if(n==2){
		return 3;
	}
do {
	int czy=0;
	for(int j=0;j<=i;j++){
		if(i%j==0){
			czy = 1;
			break;
		}
		
		
	}
	if (czy==0){
		pierwsza = i;
		
		
	}
	
	i++;
}while (n>=pierwsza);
	return pierwsza;

}
