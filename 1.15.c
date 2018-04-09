#include <stdio.h>

/* Fahreneit converter ++*/

int ftoc_conversion(int f);

int main()    {
	
	int lower=0;
	int upper=200;
	int step=10;
	int f=lower;
	
	
	while(f<=upper){
		printf("%d\t%d\n",f,ftoc_conversion(f));
		f+=step;
	}
	
	
}



int ftoc_conversion(int f){
	int c;
	
	c = 5 * (f-32) / 9;
	
	return c;
}
