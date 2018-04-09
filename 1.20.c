#include <stdio.h>


    /*Detab programme. The gist is finding the distance between the current position and the next tab stop */

int main()    {
    
    int nbos=8; //the number of spaces in a tab
    char input=0;
    int position=0;
    
    while ((input=getchar())!=EOF){
        int spaces=0;
        
        if (input=='\t'){
            spaces=nbos-((position)%nbos);  //calculate the spaces needed for the next tab stop
            while (spaces>0){
                putchar('#');
                position++;
                spaces--;
            }
        }
        else if (input=='\n'){
            putchar(input);
            position=0;
        }
        else{
            putchar(input);
            position++;
        }
    }
}


