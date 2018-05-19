#pragma once
#pragma warning(disable : 4996)
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
void readFile() {
	setlocale(LC_ALL, "RUS");
	char ch = ' ', sl[50];
	char **text;
	int nteams = 10;
	FILE *tsopen, *pr;
	if (tsopen = fopen("teams.txt", "rt"));
	else perror("Error");
	text = (char  **)malloc(nteams * sizeof(char *));
	for (int i = 0; i < nteams; i++) {
		ch = getc(tsopen);
		while (ch != '\n') {
			text[i] += ch;
			ch = getc(tsopen);

		}
		printf("%s", text[i]);
	}
}

int main()
{
	readFile();

	_getch();
	return 0;
}