#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */


/* Clear out trailing tabs or spaces in a line of input */

void lineCleaner(char s[],int lim);
void reverse (char input[]);

int main()    {
    
    int max;            /* maximum length seen so far */
    char line[MAXLINE];    /* current input line */
    
    max = 0;
    
    lineCleaner(line,MAXLINE);
    reverse(line);
    printf("%s\n",line);
    
}

/* Line cleaner. It cleans the trailing tabs or spaces*/

void lineCleaner(char s[],int lim){
    
    
    int c,i;
    i = 0;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
        s[i]=c;
    }
    
}

void reverse (char input[]){
    int i,j;
    char temp;
    j=0;
    
    for(i=0;input[i]!='\0';++i)
        --i;
    if(input[i]=='\n')
        --i;
    
    while (j<i){
        temp=input[j];
        input[j]=input[i];
        input[i]=temp;
        --i;
        --j;
    }
    
}


