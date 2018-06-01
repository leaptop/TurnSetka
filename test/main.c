#define CTEST_MAIN
#include <ctest.h>
#include <Funcs_2.h>
#include <Funcs.h>

CTEST(checkIns, Correct) {
    int x = 1;
    int result = checkIns(x);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(checkIns, Incorrect) {
    int x = 3;
    int result = checkIns(x);
    int expected = 1;
    ASSERT_EQUAL(expected,result);
}

int main(int argc, const char** argv) {
    int test_res = ctest_main(argc, argv);
    return test_res;
}


