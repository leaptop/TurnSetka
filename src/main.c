#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int SetPrint(char** names, int m);

char** board;

void FillBoard(){


    board[0] = "very";
    board[1] = "cool";
    board[2] = "trpo";
    board[3] = "project";


}



void InitNames(){
    int i,j;
    board = (char**)malloc(8 * sizeof(char*));
    for (i = 0; i < 8; i++) {
        board[i] = (char*)malloc(8 * sizeof(char));
        for (j = 0; j < 8; j++) {
            board[i][j] = ' ';
        }
    }
    FillBoard();
}

int SetPrint(char** names, int m){

int i,j,l,k;

char lines[] = "--------------------";
k=m;
if (m % 2 == 1) k=m-1;


for (i=0; i<k; i++){
    if (i % 2 == 0){
        printf("%s",names[i]);
        for (j=0;j<(15 - strlen(names[i]));j++)
            printf("-");
        printf("|");

        printf("\n               |");
        printf("\n               |---");
    }
    if (i % 2 == 1){
        printf("\n               |");
        printf("\n");
        printf("%s",names[i]);
        for (j=0;j<(15 - strlen(names[i]));j++)
            printf("-");
        printf("|");
        printf("\n");
        printf("\n");


    }



    }

    if (m % 2 == 1){
        printf("%s",names[m-1]);
        for (j=0;j<(15 - strlen(names[m-1]));j++)
            printf("-");

}

return 0;

}

void Winners(){
int i;
int n[2];
printf("Choose winners in each pair! (input 1 if team 1 won, input 2 if team 2 won) \n");


for(i=1;i<3;i++){
printf("Winner of pair %d: \n",i);
scanf("%d",&n[i-1]);

}
int mul=0;
for(i=0; i<2; i++){
    board[i]=board[n[i] - 1 + mul];
    mul+=2;


}



}






int main(){
int x;

while(1){
printf("1 - initial grid \n");
printf("2 - choose winners \n");



scanf("%d",&x);

switch (x){

case 1 : InitNames(); SetPrint(board,4); break;
case 2 : InitNames(); Winners(); SetPrint(board,2);break;





}


}


}
