//
//  Z3zadanie_2.c
//  
//
//  Created by Student on 20.10.2017.
//
//

#include <stdio.h>

void dzielniki(){
    int a;
    int k;
    scanf("%d",&a);
        k=1;
while (k<=a)
{

    if(a%k==0){
        printf("%d ",k);
    }
    k++;
}
}
int main()
{
    dzielniki ();
    return 0;
}
