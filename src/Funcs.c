#include "headers.h"

void InitNames(char **c)
{
    int i;
    c = (char **)malloc(30 * sizeof(char *));
    for (i = 0; i < 30; i++) {
        c[i] = (char *)malloc(30 * sizeof(char));
    }
}
