#include <stdio.h>

int main()
{
	char a;
	char b;
	char c;
	char d;
	int i;
	int i2;
	int i3;
	int i4;
//  printf("podaj pierwszom litere:");
	scanf("%c", &a);
//	printf("podaj drugom litere:");
	scanf("%c", &b);
//	printf("podaj trzeciom litere:");
	scanf("%c", &c);
//	printf("podaj czwartom litere:");
	scanf("%c", d);
 for (i=1 ; i <=4 ; ++i) {
	 printf("1");
	  for (i2=1 ; i2 <=4 ; ++i2) {
		  printf("2");
		 	  for (i3=1 ; i3 <=4 ; ++i3) {
				  printf("3");
				  
						for (i4=1 ; i4 <=4 ; ++i4) {
							printf("4");
							if(i4 == 1){
							printf("%c",a);
							
							}
							if(i4 == 2){
							printf("%c",b);
							
							}
							if(i4 == 3){
							printf("%c",c);
							
							}
							if(i4 == 4){
							printf("%c",d);
							}
							printf("koniec 1\n");
							break;
							
		  
							}
							if(i3 == 1){
							printf("%c",a);
							
							}
							if(i3 == 2){
							printf("%c",b);
							
							}
							if(i3 == 3){
							printf("%c",c);
							
							}
							if(i3 == 4){
							printf("%c",d);
							}
							printf("koniec 2\n");
							break;

		}
		if(i2 == 1){
							printf("%c",a);
							
							}
							if(i2 == 2){
							printf("%c",b);
							
							}
							if(i2 == 3){
							printf("%c",c);
							
							}
							if(i2 == 4){
							printf("%c",d);
							
							}
							printf("koniec 3\n");
							break;
							
	  }
	  if(i == 1){
							printf("%c\n",a);
							}
							if(i == 2){
							printf("%c\n",b);
							}
							if(i == 3){
							printf("%c\n",c);
							}
							if(i == 4){
							printf("%c\n",d);
							}
							printf("koniec 4\n");

   }



return 0;
}
