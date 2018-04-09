#include <stdio.h>


int *linear_search(int t[],int k,int s);


int main() {

	int table[100];
	int k = sizeof(table);
	table[25]=10;
	int occurance = *linear_search(table,k,10);
	printf("%d\n",occurance);
}

int *linear_search(int t[],int k,int s){

	;
	for (int i=0;i<k;i++){
		if (t[i]==s){
			return &i;
		}
	}
	return 0;
}
