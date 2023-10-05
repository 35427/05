#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sum = 0;
	int number;
	int i;
	
	printf("input a number : ");
	scanf("%d", &number);
	
	for(i=0; i<=number; i++){
		sum = sum + i;
		
	}
	
	printf ("The result is %d", sum);
	return 0;
}
