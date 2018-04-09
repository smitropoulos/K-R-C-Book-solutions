#include <stdio.h>

/* count digits, white space, others */
#define EOL '~'	//set tilde as the termineation character for the input

int main()    {
	
	int j=10;
	int c,chars,length[j],counter;
	
	for (int i=0;i<10;i++)
		length[i]=0;
	
	chars=counter=0;
	
	while ((c = getchar()) != EOL){
		if (c==' ' || c=='\n' || c=='\t'){
			++length[chars];
			chars=0;
		}
		else{
			++chars;
			;
		}
	}
	
	for(int i=0;i<j;i++){
		if (length[i]!=0)
			printf("\n%d ",i);
		while(length[i]>0){
			printf("=");
			--length[i];
		
		}
		
	}
	printf("\n");
}

