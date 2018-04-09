/* Write a Program to copy its input to its output,replacing each string of one or more blanks by a single blank */

#include<stdio.h>
#define NONBLANK '-'

int main(void)
{
	int c,lastc;
	
	lastc=NONBLANK;
	
	while((c=getchar())!=EOF)
  {
  if(c==' ')
	  {
	  if(lastc!=' ')
		  putchar(c);
	  }
  else
	  putchar(c);
  
  lastc=c;
  }
	return 0;
}

/*
 The essence of this program is, while reading the characters, if the last character that we encoutered is a blank, then we skip printing it.
 
 if(lastc!=' ')
 putchar(c);
 This means that if the last character is not a blank, only then print it. We store the last character in the lastc variable in the line lastc = c. For rest of the characters we simplying print it by putchar (c).
 
*/