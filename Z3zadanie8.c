//
//  Z3zadanie8.c
//  
//
//  Created by Student on 20.10.2017.
//
//

#include <stdio.h>
int silnia(int n){
    if(n==0){
        return 1;
    }else{
        return silnia(n-1)*n;
    }
}
int main(){
    int x;
    scanf("%d",&x);
    int wynik=silnia(x);
    printf("%d",wynik);




    return 0;
}
