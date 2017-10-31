//
//  Z4Z2.c
//  
//
//  Created by Student on 27.10.2017.
//
//

int LOL(int a,int b){
    if (b==0){
        return a;
    }else  if (a==0){
        return b;
    }
    return (LOL(a-1,b)+LOL(1a,b-1));


}
