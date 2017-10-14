//
//  z2_Zad6.c
//  
//
//  Created by Student on 13.10.2017.
//
//

#include <stdio.h>
int main(){
    for(int i=1;i<=20;i++){
        for (int j=1; j<=20; j++) {
			if(i*j<10){
            printf("%d   ",j*i);
			}else if(i*j<100){
			printf("%d  ",j*i);
			}else {
			printf("%d ",j*i);	
			}
        }
        printf("\n");
    }
    
    
    return 0;
    
}
