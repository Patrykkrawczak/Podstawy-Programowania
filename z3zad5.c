//
//  z3zad4.c
//  
//
//  Created by Student on 20.10.2017.
//
//

#include <stdio.h>
int fib(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
		}else {
			return fib(n-1)+n;
			
		}
	
	
	
}
int main(){
    
    int n;
    scanf("%d",&n);
int wynik=(fib(n));
    printf("%d",wynik);
    return 0;
}