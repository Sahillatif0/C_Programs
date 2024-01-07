#include<stdio.h>
#include<string.h>
int main(){
    char colours[50], turn='y';
    int game = 1;
    printf("Enter pieces colors as string: ");
    scanf("%s", colours);
    while(game){
        int index,i,len = strlen(colours),bcnt=0,ycnt=0;
        for(i=0;i<len;i++)
            printf("%c",colours[i]);
        for(i=0;i<len;i++){
            if(turn=='y'){
            if(colours[i]=='b' && ycnt<3)
                ycnt=0;
            else if(colours[i]=='y' && ycnt<3)
                ycnt++;
            }
            else{
                if(colours[i]=='b' && bcnt<3)
                    bcnt++;
                else if(colours[i]=='y' && bcnt<3)
                    bcnt=0;
            }
        }
        if((turn=='y' && ycnt==3) || (turn=='b' && bcnt==3)){
        if(turn=='y')
            printf("\nYasir's turn, Enter index of piece: ");
        else
            printf("\nBinishe's turn, Enter index of piece: ");
        scanf("%d", &index);
        if(turn =='y' && colours[index-1]=='y' && colours[index]=='y' && colours[index+1]=='y'){
            for(i=index;i<len;i++){
                colours[i] = colours[i+1];
            }
            len--;
            turn='b';
        }
        else if(turn =='b' && colours[index-1]=='b' && colours[index]=='b' && colours[index+1]=='b'){
            for(i=index;i<len;i++){
                colours[i] = colours[i+1];
            }
            len--;
            turn='y';
        }
        else{
            printf("Wrong Input!\n");
        }
        }
        else{
            if(turn=='y')
                printf("\nBinish");
            else
                printf("\nYasir");
            game=0;
        }

    }
    
    return 0;
}