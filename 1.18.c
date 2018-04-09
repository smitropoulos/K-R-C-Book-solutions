#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */


/* Clear out trailing tabs or spaces in a line of input */

void lineCleaner(char s[],int lim);

int main()    {
    
    int max;            /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    
    max = 0;
    
    lineCleaner(line,MAXLINE);
    printf("%s\n",line);
    
}

/* Line cleaner. It cleans the trailing tabs or spaces*/

void lineCleaner(char s[],int lim){
    
    int c,i;
    i = 0;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
        s[i]=c;
    }
    
    while (i>0){
        
        if ((s[i]==' ' || s[i]=='\t') && s[i-1] >= 32)
            
            s[i]='\0';
        i--;
    }
    
    if (s[i]=='\n'||s[i]=='\t'||s[i]==' ')
        s[i]='\0';
    
}



