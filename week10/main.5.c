#include <stdio.h>
#define SIZE 4

void square_array(int a[],int size);
void print_array(int a[],int size);


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int list[SIZE]={1,2,3,4};
	
	print_array(list,SIZE);
	square_array(list,SIZE);
	print_array(list,SIZE);
	
	
	return 0;
}
