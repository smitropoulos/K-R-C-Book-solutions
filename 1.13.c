#include <stdio.h>

/* count digits, white space, others */
#define EOL '~'	//set tilde as the termineation character for the input

int main()    {
	
	int c;
	int chars[26];
	
	for (int i=0;i<26;++i)
		chars[i]=0;
	
	
	while((c=getchar())!=EOL){
	
		if(!(c==' ' || c=='\n' || c=='\t'))
			++chars[c-'a'];
		
	}
	
	for (int i=0;i<26;++i){
		printf("\n%c  ",'a' + i);
        while (chars[i]>0){
			printf("=");
			--chars[i];
        }
	}
	
}

