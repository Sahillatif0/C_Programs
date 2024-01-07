#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void Top3MostTon(int Player[][7], int Total_rows ){
    int i,mScore[3]={0},id[3]={0};
    for(i=0;i<Total_rows;i++){
        if(Player[i][2]>mScore[0] && (Player[i][3]>=2 || Player[i][4]>=1)){
            mScore[2]=mScore[1];
            id[2] = id[1];
            mScore[1]=mScore[0];
            id[1] = id[0];
            mScore[0]=Player[i][2];
            id[0] = Player[i][0];
        }
        else if(Player[i][2]>mScore[1] && (Player[i][3]>=2 || Player[i][4]>=1)){
            mScore[2]=mScore[1];
            id[2] = id[1];
            mScore[1]=Player[i][2];
            id[1] = Player[i][0];
        }
        else if(Player[i][2]>mScore[2] && (Player[i][3]>=2 || Player[i][4]>=1)){
            mScore[2]=Player[i][2];
            id[2] = Player[i][0];
        }
    }
    for(i=0;i<3;i++){
        printf("ID: %d\n", id[i]);
    }
}
void Top3BoundaryHitter( int Player[][7], int Total_rows){
    int i,mScore[3]={0},id[3]={0};
    for(i=0;i<Total_rows;i++){
        int bound = Player[i][5] + Player[i][6];
        if(bound>mScore[0]){
            mScore[2]=mScore[1];
            id[2] = id[1];
            mScore[1]=mScore[0];
            id[1] = id[0];
            mScore[0]=bound;
            id[0] = Player[i][0];
        }
        else if(bound>mScore[1]){
            mScore[2]=mScore[1];
            id[2] = id[1];
            mScore[1]=bound;
            id[1] = Player[i][0];
        }
        else if(bound>mScore[2]){
            mScore[2]=bound;
            id[2] = Player[i][0];
        }
    }
    for(i=0;i<3;i++){
        printf("ID: %d\n", id[i]);
    }
}
int main(){
    srand(time(NULL));
    int i,j,players[10][7];
    for(i=0;i<10;i++){
        printf("Enter Id: ");
        scanf("%d", &players[i][0]);
        players[i][1] = rand()%50;
        players[i][2] = rand()%600;
        players[i][3] = rand()%15-1;
        players[i][4] = rand()%10-1;
        players[i][5] = rand()%30;
        players[i][6] = rand()%20;
        printf("%d %d %d %d %d %d %d\n", players[i][0],players[i][1],players[i][2],players[i][3],players[i][4],players[i][5],players[i][6]);
        // printf("Enter Matches: ");
        // scanf("%d", &players[i][1]);
        // printf("Enter Runs: ");
        // scanf("%d", &players[i][2]);
        // printf("Enter Fifty's: ");
        // scanf("%d", &players[i][3]);
        // printf("Enter Centuries: ");
        // scanf("%d", &players[i][4]);
        // printf("Enter Four's: ");
        // scanf("%d", &players[i][5]);
        // printf("Enter Six's: ");
        // scanf("%d", &players[i][6]);
    }
    Top3MostTon(players,10);
    Top3BoundaryHitter(players,10);
    return 0;
}