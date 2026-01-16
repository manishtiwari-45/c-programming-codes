#include<stdio.h>

int main(void)
{	
	int i,c;
	for(i = 33; i<= 126; i++){
		printf("%3d %c\n",i, i);
	}
	while((c = getchar()) != EOF) {
		putchar(c);
	}
	return 0;
}
	
