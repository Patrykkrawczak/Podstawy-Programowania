//
//  z2_Zad1.c
//  
//
//  Created by Student on 13.10.2017.
//
//

#include <stdio.h>
int max;
int main()
{
    int a;
    int b;
    int c;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>=b)
    {
        if(a>=c)
        
            max=a;
        
        else
        
            max=c;
        
    }
    else
    {
        if(b>=c)
        
            max=b;
        
        else
        
            max=c;
        
    
    }
    printf("%d",max);
    
    
    
    
    
    return 0;
}
