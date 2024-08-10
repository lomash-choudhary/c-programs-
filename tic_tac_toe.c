#include<stdio.h>
#include<conio.h>
void board();
int wincheck();
void system();
char b[]={'0','1','2','3','4','5','6','7','8','9'};
int main(){
    int player=1,input,status=-1,w;
    char mark;
    board();
    while(status==-1){
        player=(player%2==0)?2:1;
        mark = (player==1)?'X':'O';
        printf("please enter value for player %d\n",player);
        scanf("%d",&input);
        if(input<1||input>9){
        printf("invalid input");
        continue;
    }
    if(b[input]=='X'||b[input]=='O'){
        printf("shell is already filled");
        continue;
    }
    b[input]=mark;
    board();
    w=wincheck();
    if(w==0){
        printf("draw");
        break;
    }
    else if(w==1){
        printf("player %d is winner",player);
        break;
    }
    player++;
    }

}
void board(){
    system("cls");
    printf("\n\n");
    printf("==== TIC TAC TOE===");
    printf("   |   |  \n");
    printf(" %c | %c | %c \n",b[1],b[2],b[3]);
    printf("___|___|___\n");
    printf("   |   |  \n");
    printf(" %c | %c | %c\n",b[4],b[5],b[6]);
    printf("___|___|___\n");
    printf("   |   |  \n");
    printf(" %c | %c | %c\n",b[7],b[8],b[9]);
    printf("   |   |  \n");
}

int wincheck(){
    int c=0,i;
    if ((b[1] == b[2] && b[2] == b[3]) ||
        (b[4] == b[5] && b[5] == b[6]) ||
        (b[7] == b[8] && b[8] == b[9]) ||
        (b[1] == b[4] && b[4] == b[7]) ||
        (b[2] == b[5] && b[5] == b[8]) ||
        (b[3] == b[6] && b[6] == b[9]) ||
        (b[1] == b[5] && b[5] == b[9]) ||
        (b[3] == b[5] && b[5] == b[7])) {
        return 1; // There's a winner
    }
    for(i=1;i<=9;i++){
        if(b[i]!='X'||b[i]!='O'){
            return -1;
        }
    }
    for(i=1;i<=9;i++){
        if (b[i]=='X'||b[i]=='O')
        {
            c++;
        }   
    }
    if(c==9){
        return 0;
    }
}