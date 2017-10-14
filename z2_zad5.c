//
//  z2_zad4.c
//  
//
//  Created by Student on 13.10.2017.
//
//

#include <stdio.h>
int main()
{
        int wybor;
    do{
        

    scanf("%d", &wybor);
    switch (wybor) {
        case 1:
 
            {
                float a;
                float b;
                printf("podaj a");
                scanf("%f", &a);
                printf("podaj b");
                scanf("%f", &b);
                int wynik=(a+b)*1.0;
                printf("wynik = %d\n", wynik);
            }
            break;
        case 2:
 
            {
                float a;
                float b;
                printf("podaj a");
                scanf("%f", &a);
                printf("podaj b");
                scanf("%f", &b);
                int wynik=(a-b)*1.0;
                printf("wynik = %d\n", wynik);
            }
            break;
        case 3:
        
            {
                float a;
                float b;
                printf("podaj a");
                scanf("%f", &a);
                printf("podaj b");
                scanf("%f", &b);
                int wynik=(a*b)*1.0;
                printf("wynik = %d\n", wynik);
            }
            break;
        case 4:

            {
                float a;
                float b;
                printf("podaj a");
                scanf("%f", &a);
                printf("podaj b");
                scanf("%f", &b);
                int wynik=(a/b)*1.0;
                printf("wynik = %d\n", wynik);
            }
            break;
        default:
            break;
    }
    } while(wybor!=0);
      
    
    return 0;
}
