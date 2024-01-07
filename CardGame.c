#include<stdio.h>
#include <string.h>
int main(){
    int game = 1, aWin=0, bWin=0;
    while(game){
    int i,j, strong[2] = {0}, player, king[2], pair[2][2], aWinner=0;
    int cardRank[2][5];
    char Suit[2][5];
    char players[2][6] = {"Alice", "Bob"};
    for(player=0;player<2;player++){
    	for(i=0;i<5;i++){
            printf("%s, enter the card rank of card %d: ",players[player], i+1);
            scanf("%d", &cardRank[player][i]);
            if(cardRank[player][i]<2 || cardRank[player][i]>14){
            	printf("Invalid Card!\n");
            	i--;
            	continue;
			}
            printf("Now enter the card suit of card %d('h' for heart, 'd' for diamond, 'c' for clubs, and 's' for spades): ", i+1);
            scanf(" %c", &Suit[player][i]);
            if(Suit[player][i]!='h' && Suit[player][i]!='c' && Suit[player][i]!='s' && Suit[player][i]!='d'){
            	printf("Invalid Card Suit!\n");
            	printf("Now enter the card suit of card %d('h' for heart, 'd' for diamond, 'c' for clubs, and 's' for spades): ", i+1);
            	scanf(" %c", &Suit[player][i]);
			}
         }
        for(i=0;i<2;i++){
            int sameCardN = 0;
            for(j=i;j<5;j++){
                if(cardRank[player][i]==cardRank[player][j]){
                    sameCardN++;
                }
            }
            if(sameCardN==4){
                king[player] = cardRank[player][i];
                strong[player] = 1;
            }
        }
        int cnt =0;
        for(i=0;i<4;i++){
            int sameCardN = 0;
            for(j=0;j<5;j++){
                if(cardRank[player][i]==cardRank[player][j]){
                    sameCardN++;
                }
            }
            if(sameCardN>=2 && sameCardN<=3 && pair[player][cnt-1]!=cardRank[player][i]){
            	cnt++;
                pair[player][cnt-1] = cardRank[player][i];
            }
            if(cnt==2){
                strong[player] = 2;
            }
        }
        if(strong[player]==0)
            strong[player]=3;
        
    }
    if(strong[0]<strong[1])
        aWinner = 1;
    else if(strong[0]>strong[1])
        aWinner = -1;
    else{
        int sum1=0,sum2=0;
        switch (strong[0])
        {
        case 1:
            if(king[0]>king[1])
                aWinner = 1;
            else if(king[0]<king[1])
                aWinner = -1;
            else
                aWinner = 0;
            break;
        case 2:
            if(pair[0][0]+pair[0][1]>pair[1][0]+pair[1][1])
                aWinner = 1;
            else if(pair[0][0]+pair[0][1]<pair[1][0]+pair[1][1])
                aWinner = -1;
            else
                aWinner = 0;
            break;
        default:
            for(i=0;i<5;i++)
                sum1+=cardRank[0][i];
            for(i=0;i<5;i++)
                sum2+=cardRank[1][i];
            if(sum1>sum2)
                aWinner = 1;
            else if(sum2>sum1)
                aWinner = -1;
            else
                aWinner = 0;
            break;
        }
    }
    if(aWinner==1){
        printf("Alice Win\n");
        aWin++;
        }
    else if(aWinner==-1){
        printf("Bob Win\n");
        bWin++;
    }
    else
        printf("Draw\n");
    char gameStop;
    printf("Do you want to continue playing, type 'c' to continue, any other to stop: ");
    scanf(" %c", &gameStop);
    if(gameStop!='c'){
    	printf("Alice Wins = %d\nBob Wins = %d", aWin, bWin);
    	game = 0;
	}
	}
    return 0;
}
