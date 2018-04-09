#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */


/* print the longest input line */

int get_line(char s[],int lim);

int main()    {

	int len;            /* current line length */
	int max;            /* maximum length seen so far */
	char line[MAXLINE];    /* current input line */

	max = 0;
	while ((len = get_line(line, MAXLINE)) > 0)
		if (len > 8) {
			printf("%s", line);

		}
}

/* get_line:  read a line into s, return length  */

int get_line(char s[],int lim){
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;        }
	s[i] = '\0';
	return i;
}



