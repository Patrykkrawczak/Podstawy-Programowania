//
//  Z3zadanie9.c
//  
//
//  Created by Student on 20.10.2017.
//
//

#include <stdio.h>
int f(int n){
    if(n==0){
        return 1;
    }else if(n%2==0){
        return n*n;
    }else{
        return n*n-5;
    }
    
}
int main(){
    int x;
    scanf("%d",&x);
    int wynik;
    wynik=f(x);
    printf("%d",wynik);
    
    return 0;
}
