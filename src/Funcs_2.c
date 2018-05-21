#include <stdio.h>
//#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
char** readFile(char **text, char chr[][20], int *m) {//¬озвращает указатель на массив массивов чаров
	setlocale(LC_ALL, "RUS");
	const int nteams = 10;
	char sl[20];
	int j = *m;
	FILE *tsopen;
	if (tsopen = fopen("teams.txt", "rt"));
	else perror("Error");
	while(!feof(tsopen)){
		text[j] = fgets(chr[j++], sizeof(sl), tsopen);
		//text[i] = &chr[i][0];
		printf("%s", text[j]);
	//j++;
	}
	printf("\n");
	*m = j;
	return (char**)text;
}
int main()
{
	int m = 0;
	char chr[10][20];
	char **c;
	c = (char  **)malloc(10 * sizeof(char *));
	readFile(c, chr, &m);
	printf("\nAfter main \nc[0] = %s", c[0]);
	printf("\nc[1] = %s", c[1]);
	printf("\nc[2] = %s", c[2]);
	printf("\nc[6] = %s", c[6]);
	printf("\nc[7] = %s", c[7]);
	printf("\nc[8] = %s", c[8]);
	printf("\nc[9] = %s", c[9]);
	printf("\nc[m] = %s", c[m]);
	printf("\nm = %d", m);

	getchar();
	return 0;
}
