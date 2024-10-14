#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {int number;
	printf("Enter an integer:");
	scanf("%i", &number);
	
	if(number<0){
		printf("%d\n",-number);
		}
		else{
			printf("%d\n",number);	
		}

	
	return 0;
}
