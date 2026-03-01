#include <stdio.h>
#define MAX 50
int countVowel(char [ ]);

void main() {
	char text[MAX];
	int cVowel;
	printf("Enter text : ");
	scanf("%s", text);
	cVowel = countVowel(text);
	printf("Text : [%s] has %d vowels", text, cVowel);
}

int countVowel(char t[]) {
	int i=0, count=0; 
	int A=0,E=0,I=0,O=0,U=0;
	while (i<MAX && t[i]!='\0') {
		if (t[i]=='A'||t[i]=='a'||t[i]=='E'||t[i]=='e'||t[i]=='I'||t[i]=='i'||
			t[i]=='O'||t[i]=='o'||t[i]=='U'||t[i]=='u')
				count++;
        if (t[i]=='A'||t[i]=='a')
            A++;
        else if (t[i]=='E'||t[i]=='e')
            E++;
        else if (t[i]=='I'||t[i]=='i')
            I++;
        else if (t[i]=='O'||t[i]=='o')
            O++;
        else if (t[i]=='U'||t[i]=='u')
            U++;
		i++;
	}
	printf("A = %d\n", A);
	printf("E = %d\n", E);
	printf("I = %d\n", I);
	printf("O = %d\n", O);
	printf("U = %d\n", U);	
	
	return(count);
}
