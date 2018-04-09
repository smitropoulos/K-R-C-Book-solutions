#include <stdio.h>

void strcat1(char *s, char *t){
	while(*s)
		s++;

	while ((*s++=*t++))
		;
}

int main() {

//	char string1[20]="What a ";
//	char string2[20]="Penis!";
//	strcat1(string1,string2);
//	printf("%s",string1);

	char *string4="Penis!";
	char string3[20]="Peos!";

	printf("%s",string4);

	;

	return 0;
}
