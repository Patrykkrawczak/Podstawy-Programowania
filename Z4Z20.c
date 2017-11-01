//
//  Z4Z3.c
//  
//
//  Created by Student on 27.10.2017.
//
int f(int x,int y){
	if(x==y){
		return x;
	}
	if(x>y){
		return 2*f((x/y),y);
	}
	if(x<y){
		return 2*f(y,(y/x));
	}
	
}