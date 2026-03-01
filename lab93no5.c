#include <stdio.h>
#include <ctype.h>
#define MAX 100
int compute(char input[]);

void main(){
	char enter[MAX];
	printf("Enter input: ");
	fgets(enter, MAX, stdin);
	printf("Sum of digit char: %d\n", compute(enter));
}

int compute(char input[]){
	int i=0,sum=0;
	while(input[i]!='\0'){
		if (isdigit(input[i]))
			sum += input[i] - '0';
		i++;
	}
	return sum;
}
