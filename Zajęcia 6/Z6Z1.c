#include <stdio.h>
#include <stdbool.h>

bool funkcja(float a,float b,float c){
	if(a<b+c||b<c+a||c<a+b){
		return true;
	}
	else return false;
}