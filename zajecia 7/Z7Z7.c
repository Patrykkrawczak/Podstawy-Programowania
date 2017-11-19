#include <stdlib.h>

int *funkcja(int *tab1, int *tab2, int *tab3, int n){
	int *tab4= (int *) malloc(n*sizeof(int *));
	int i=0;
	for(;i<n;i++){
		*(tab1+i)>=0 ? *(tab4+i)=*(tab2+i) : *(tab4+i)=*(tab3+i);
		
		
	}
	return tab4;
}