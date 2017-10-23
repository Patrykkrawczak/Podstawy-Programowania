#include <stdio.h>
int pot(int n){
    
    if (n==0)
    {
        return 1;
    }
    else
    {
        return pot(n-1)*2;
    }
}

int main(){
    int x;
    scanf("%d",&x);
    printf("%d", pot(x));


    return 0;
}
