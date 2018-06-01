#define CTEST_MAIN
#include <ctest.h>
#include <Funcs_2.h>
#include <Funcs.h>

CTEST(checkIns, Correct) {
    char ins [1];
    ins [0] = '2';
    int result = checkIns(ins);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(checkIns, Incorrect) {
    char ins [1];
    ins [0] = 'f';
    int result = checkIns(ins);
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

int main(int argc, const char** argv) {
    int test_res = ctest_main(argc, argv);
    return test_res;
}