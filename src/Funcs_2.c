#include <stdio.h>
//#include <ncurses.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

char** readFile(char **text, char chr[][20], int *m) {
    setlocale(LC_ALL, "RUS");
    char sl[20];
    int j = *m;
    FILE *tsopen;
    if ((tsopen = fopen("teams.txt", "rt")));
    else perror("Error");
    while(!feof(tsopen)){
        text[j] = fgets(chr[j], sizeof(sl), tsopen);
        j++;
    }
    *m = j - 1;
    return (char**)text;
}

