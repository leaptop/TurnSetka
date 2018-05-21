#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Funcs_2.h"


int m=0;
char **c;




int SetPrint(char** names, int m);
void Winners();
char** losers;
char q = 'n';
/*
void FillBoard(){


    board[0] = "very";
    board[1] = "cool";
    board[2] = "trpo";
    board[3] = "project";


}
*/


void InitNames(){
    int i,j;
    c = (char**)malloc(30 * sizeof(char*));
    for (i = 0; i < 30; i++) {
        c[i] = (char*)malloc(30 * sizeof(char));

    }

}




int SetPrint(char** names, int m){

int i,j,l,k;


k=m;
if (m % 2 == 1) k=m-1;

printf("Winners bracket: \n \n \n");

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
printf("\n");
return 0;

}

void Winners(){
int i;
printf("%d \n", m);
int n[m/2];
int l[20];
//printf("Will there be lower bracket? y/n \n");
//scanf ("%c",&q);



printf("Choose winners in each pair! (input 1 if team 1 won, input 2 if team 2 won) \n");
printf("%d \n", m / 2);

for(i=1;i<(m / 2) + 1;i++){
printf("Winner of pair %d: \n",i);
scanf("%d",&n[i-1]);
//if (n[i-1] == 1) l[i-1] = 2;
  //  else l[i-1] = 1;

}


int mul=0;
for(i=0; i<m / 2; i++){
    c[i]=c[n[i] - 1 + mul];
    mul+=2;
   // losers[i] = c[l[i] - 1 + mul];

}

if (m % 2 == 1) c[i]=c[m-1];


if (m % 2 == 0) m=m/2;
    else m=m/2 + 1;


}






int main(){
int x,s,ss;
//InitNames();

InitNames();
char **losers = (char  **)malloc(30 * sizeof(char *));

char chr[30][20];

readFile(c, chr, &m);


for(s=0; s<m; s++){
    c[s][strlen(c[s])-1] = '\0';



}

while(1){
if(q == 'n'){
    printf("1 - show grid \n");
    printf("2 - choose winners \n");
}

if(q == 'y'){
    printf("1 - show grid \n");
    printf("2 - choose winners \n");

}


scanf("%d",&x);

switch (x){

case 1 : SetPrint(c,m); break;
case 2 : Winners(); SetPrint(c,m);break;





}


}


}
