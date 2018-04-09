#include <stdio.h>

int main()    {
	
	int tabs=0,lines=0,blanks =0 ;
	char c;
	while ((c=getchar())!=EOF){
		
		if(c=='\t')
			++tabs;
		if(c=='\n')
			++lines;
		if(c==' ')
			++blanks;
	}
	printf("%d,%d,%d",tabs,lines,blanks);
}