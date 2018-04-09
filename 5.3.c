#include <stdio.h>

void strcat1(char *s, char *t){
	while(*s)
		s++;

	while ((*s++=*t++))
		;
}

int main() {

	char string1[100]="What a ";
	char string2[100]="Penis!";
	strcat1(string1,string2);
	printf("%s",string1);

	return 0;
}
