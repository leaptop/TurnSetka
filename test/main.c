#define CTEST_MAIN
#include <ctest.h>
#include <Funcs_2.h>
#include <Funcs.h>
/*
CTEST(checkF, Correct) {
    int result = checkF();
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}
*/
int main(int argc, const char** argv) {
    int test_res = ctest_main(argc, argv);
    return test_res;
}


