//
//  Z3zadanie_3.c
//  
//
//  Created by Student on 20.10.2017.
//
//

#include <stdio.h>
int karol(int n){
    int suma=0;
    for(int i=0;i<n;i++){
        if(i%2!=0){
            suma=suma+i;
        
        }

    }
    return suma;
}
int main(){

    int n;
    scanf("%d",&n);
    printf("%d",karol(n));

    return 0;
}
