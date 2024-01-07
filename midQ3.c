#include<stdio.h>
int main(){
    int game = 1,i,j, aliceWin = 0;
    int aliceCardRank[5],bobCardRank[5];
    char aliceSuit[5],bobSuit[5];
    while (game)
    {
        for(i=0;i<5;i++){
            printf("Aice, enter the card rank of card %d: ", i+1);
            scanf("%d", &aliceCardRank[i]);
            printf("Now enter the card suit of card %d('h' for heart, 'd' for diamond, 'c' for clubs, and 's' for spades): ", i+1);
            scanf("%c", &aliceSuit[i]);
        }
        for(i=0;i<5;i++){
            printf("Bob, enter the card rank of card %d: ", i+1);
            scanf("%d", &bobCardRank[i]);
            printf("Now enter the card suit of card %d('h' for heart, 'd' for diamond, 'c' for clubs, and 's' for spades): ", i+1);
            scanf("%c", &bobSuit[i]);
        }
        int same=0,same2=0, sameN, same2N, samePair[2],samePair2[2], samePaircnt;
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                if(aliceCardRank[i]==aliceCardRank[j]){
                    same++;
                }
            }
            if(same==4){
                sameN = aliceCardRank[i];
                for(i=0;i<2;i++){
                    for(j=0;j<5;j++){
                        if(bobCardRank[i]==bobCardRank[j]){
                            same2++;
                        }
                    }
                    if(same2==4){
                        same2N = bobCardRank[i];
                }
            }
            if(sameN>same2N){
                aliceWin=1;
            }
            else
            {
                aliceWin=-1;
            }
            
        }
        else if (same>2 && same<4);
        {
            samePaircnt++;
            if(samePaircnt==1){
                samePair[0] = aliceCardRank[i];
                
            }
            else{
                samePair[1] = aliceCardRank[i];
                
            }
        }
        
    }
    }
    return 0;
}