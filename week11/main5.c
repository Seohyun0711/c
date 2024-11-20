#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	FILE*fp;
	char word1[100], word2[100], word3[100];

    printf("intput a word: ");
    scanf("%s", word1);
    printf("intput a word: ");
    scanf("%s", word2);
    printf("intput a word: ");
    scanf("%s", word3);
	
	fp= fopen("sample.txt","w");
	fprintf(fp, "%s %s %s\n", word1, word2, word3);
	fclose(fp);


	
	
}
