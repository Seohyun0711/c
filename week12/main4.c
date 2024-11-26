#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,sum,average;
	int grade[5];
	
	for (i=0;i<5;i++)
	{
		printf("input value-grade[%i]=",i);
		scanf("%d",&grade[i]);
		sum+=grade[i];
		average=sum/5;
		
		
	}
	  char *ptr;
	ptr=&grade[5];
	

	for(i=0;i<5;i++){
		
		printf("grade[%i]=%d\n", i,grade[i]);
	}
	printf("average:%d\n",average);

	
	return 0;
}
