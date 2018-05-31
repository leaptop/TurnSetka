#define CTEST_MAIN
#include <ctest.h>
#include <Funcs_2.h>
#include <Funcs.h>
//#include <teams.txt>
//char **readFile(char **text, char chr[][20], int *m)
/*CTEST(checkreadFile, Correct) {
    char **c = NULL;
    char chr[30][20];
    int m = 0, i = 0;
    c = (char **)malloc(30 * sizeof(char *));
    for (i = 0; i < 30; i++) {
        c[i] = (char *)malloc(30 * sizeof(char));
    }
    readFile(c, chr, &m);
    char result [20];
    strncpy(c[2], result, 20);
    
    char expected [] = "Barselona";
    ASSERT_STR(expected,result);
}*/

CTEST(checkInitNames, Correct) {
    char **c = NULL;
    
    InitNames(c);    
    
    ASSERT_NULL(c);
}


int main(int argc, const char** argv) {
    int test_res = ctest_main(argc, argv);
    return test_res;
}


