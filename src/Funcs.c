#include "headers.h"

/*
int checkIns(int ins){
if(ins != 1 && ins != 2) {
    return 1;
    } else {
        return 0;
    }
}
*/
/*
asci
0 48
1 49
2 50*/

int checkIns(char ins[] ){
if((ins[0] != 48 && ins[0] != 49 && ins[0] != 50) || ins[1]) {
    return 1;
    } else {
        return 0;
    }
}
