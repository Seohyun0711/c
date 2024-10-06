#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a=2, b=3;
	
	printf(" input to integers : ");
	scanf("%d %d", &a, &b);

	printf("+ reuslt is %d \n",a+b);
	printf("- reuslt is %d \n",a-b);
	printf("* reuslt is %d \n",a*b);
	printf("/ reuslt is %d \n",a/b);
	printf("%% reuslt is %d \n",a%b);
	
	return 0;
}
