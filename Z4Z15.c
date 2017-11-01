//
//  Z4Z3.c
//  
//
//  Created by Student on 27.10.2017.
//
//


float funn(float x1, float x2, float y1, float y2){
	float bok1;
	float bok2;

	bok1 = x2-x1;
	bok2 = y2-y1;
	if(bok1<0){
		bok1=-1*bok1*1.0;
	}
if(bok2<0){
	bok2=-1*bok1*1.0;
}
	
	return bok1*bok2*1.0;
}
