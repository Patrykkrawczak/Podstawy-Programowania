//
//  Z4Z3.c
//  
//
//  Created by Student on 27.10.2017.
//
//
#include <studio.h>

void (float a, float b, float c){
	float max=0;
if(a>b){
	if(a>c){
		max = a;
	}else{
		max =c;
	}
	
}else if(b>c){
	max=b;
}else {
	max=c;
}
if(c*c+b*b+a*a-max*max==max*max){
	printf("T");
}else {
	printf("N");
}
	
}
