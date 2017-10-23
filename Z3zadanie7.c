//
//  Z3zadanie7.c
//  
//
//  Created by Student on 20.10.2017.
//
//

#include <stdio.h>
int f(int n){
    if(n<=0 |n==10){
        return 0;
    }else{
        return 2*f(n-1)+f(n-2)+5;
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
