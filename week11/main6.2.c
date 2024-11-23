#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE *fp = NULL;      
    char c[100];     

    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("can not open the file.\n");
      
    }

  
    while (fgets(c, sizeof(c), fp) != NULL) {
        printf("%s", c); 
    }

    fclose(fp);

	return 0;
}

