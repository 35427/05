#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer = 59;
	int number;
	int trial = 0;
	

	
	
	do{
			printf("Guess a number : ");
			scanf("%d", &number);
			
			if (number < answer){
				printf("Low\n");
			}
			else if (number > answer){
				printf("High\n");
			}
			
			trial = trial + 1;
	}
	while(answer != number);
	
	printf("Congratulation! trials : %d", trial);
	
	return 0;
}
