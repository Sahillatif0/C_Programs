#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
#include <stdbool.h>

#define WORD_COUNT_EASY 20
#define WORD_COUNT_MEDIUM 20
#define WORD_COUNT_HARD 20
#define WORD_LENGTH 20
#define MAX_TRIES 3

void scramble(char *s);
int Return();
void playGame(char (*selectedWords)[WORD_LENGTH], int wordCount, int *score);
void name(char *,char *);
void random_numbers(char *);
void loadWords(char [][6]);
void strPointsDis(char *, int*, char*, int*);
void game_rules(void);
void play_game(int*, char[][6],char*,int*);
void subStrings(char *, int,char [35580][6],char [][6]);
void possibleString(char *str, int start, int end, char wordList[35580][6],char words[][6]);
int checkWord(char*, char[][6],char*, int*, char**,int);
int calPoints(char*,char*,int*);
int wordsFound=0;
int main()
{
  int game_choice;
  printf("Enter your choice of game : ");
  scanf("%d",&game_choice);
  switch(game_choice)
{
  case 1:{
  int i;
  char str[6];
  int arr[26]={4,3,8,6,5,1,0,9,2,6,4,1,8,3,0,7,9,6,3,2,1,4,8,0,5,9},strPoints[6],tScore[2]={0};
  char brr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char wordsList[35580][6],words[100][6];
  loadWords(wordsList);
  game_rules();
  do{  
  wordsFound=0;
  random_numbers(str);
  subStrings(str,6,wordsList,words);
  }while(wordsFound<15);
  printf("\n\n");
  for(i=0;i<6;i++)
    printf("%c", str[i]);
  printf("\n\n");
  strPointsDis(str,strPoints,brr,arr);
  printf("\nThe player scoring more, according to the points will win!\n");
  printf("LETS GO!\n");
  play_game(strPoints,words,str,tScore);
  return 0;
  }
break;
case 2:
{
   srand(time(NULL));
   
  printf("\t\tWelcome to the World of Words!\t\t\n");
  printf("In this game, you will be presented with scrambled words, and your task is to unscramble them.\n");
  printf("You will start with easy words, and if you do well, you can progress to medium and then hard levels.\n");
  printf("For each word, you have a limited number of tries. If you can't unscramble the word within those tries, you can choose to continue or quit.\n\n");

  // Array of words for each difficulty level
  char easyWords[WORD_COUNT_EASY][WORD_LENGTH] = {
    "apple", "banana", "cherry", "dog", "elephant",
    "fish", "grape", "house", "igloo", "jazz",
    "kite", "lemon", "monkey", "nest", "orange",
    "piano", "queen", "rose", "sun", "tree"
  };

  char mediumWords[WORD_COUNT_MEDIUM][WORD_LENGTH] = {
    "programming", "language", "challenge", "algorithm", "developer",
    "knowledge", "learning", "exercise", "victory", "success",
    "efficiency", "communication", "debugging", "iteration", "inspiration",
    "motivation", "perseverance", "discipline", "flexibility", "responsibility"
  };

  char hardWords[WORD_COUNT_HARD][WORD_LENGTH] = {
    "optimization", "implementation", "understanding", "analysis", "solution",
    "creativity", "innovation", "imagination", "enthusiasm", "dedication",
    "teamwork", "collaboration", "experience", "effort", "improvement",
    "debugging", "iteration", "persistence", "resilience", "ambiguity"
  };
  // User's score
  int score = 0;
  // Difficulty level choice
  int difficultyChoice;
  
  int wantPlay=1;
  do{
    printf("Choose Difficulty Level:\n");
    printf("1. Easy\n");
    printf("2. Medium\n");
    printf("3. Hard\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &difficultyChoice);

    switch (difficultyChoice) {
      case 1:
        playGame(easyWords, WORD_COUNT_EASY, &score);
        break;
      case 2:
        playGame(mediumWords, WORD_COUNT_MEDIUM, &score);
        break;
      case 3:
        playGame(hardWords, WORD_COUNT_HARD, &score);
        break;
      default:
        printf("Invalid choice. Please enter a number between 1 and 3.\n");
        continue; // Restart the loop to get a valid choice
    }
      // Print the current score
    wantPlay=Return();
}while(wantPlay); // Continue playing as long as the user wants to and has a positive score
  printf("\nThanks for playing! Your final score: %d\n", score);
  return 0;
}
break;
}
}
  
void name(char *name1,char *name2)
{
  printf("Enter player 1 name : ");
  gets(name1);
  printf("Enter palyer 2 name : ");
  gets(name2);
}
void game_rules(void){
  printf("There are alphabates given in upper case from A to Z :\n");
  printf("Each alphabte has different point as shown below : \n");
  printf("A B C D E F G H I J K L M N O P Q R S T U V W X Y Z \n");
  printf("4 3 8 6 5 1 0 9 2 6 4 1 8 3 0 7 9 6 3 2 1 4 8 0 5 9\n\n");
  printf("Both player need to make meaning full words from the given below string: ");
}
void random_numbers(char *str){
  int lower=65,upper=90,i,j;
  srand(time(NULL));
  for(i=0;i<6;i++)
    str[i] = ( rand() %(upper-lower+1)) + lower;
  str[6]=0;
} 
void play_game(int* strPoints, char words[][6], char* str, int *tScore){
  int i,j;
  char name1[20],name2[20];
  char  **p,**q,**pq;
  p=(char**)malloc(sizeof(char*));
  q=(char**)malloc(sizeof(char*));
  pq=(char**)malloc(sizeof(char*));
  printf("\tTHE GAME STARTS\n");
  name(name1,name2);
    for(i=0,j=0;(i+j<=6);)
    {
      *(p+i) = (char*) malloc(7*sizeof(char));
      *(q+j) = (char*) malloc(7*sizeof(char));
      *(pq+i+j) = (char*) malloc(7*sizeof(char));
      printf("Player %s enter your %d string or you can skip by pressing N: ",name1,i+1);
      gets(*(p+i));
      strcpy(*(pq+i+j),*(p+i));
      if(!(strlen(p[i])==1 && *p[i]=='N')){
        int score = checkWord(*(p+i),words,str,strPoints,pq,i+j+1);
        if(score==0)
          printf("Word is already entered\n");
        else{
          if(score==-1){
          printf("Wrong Word Entered! 3 Points Deducted\n");
          tScore[0]-=3;
        }
        else
          tScore[0]+=score;
        i++;
        p=realloc(p,(i+1)*sizeof(char*));
        pq=realloc(pq,(i+j+1)*sizeof(char*));
        *(pq+i+j) = (char*) malloc(7*sizeof(char));
        }
      }
      printf("%s's Score: %d\n",name1,tScore[0]);
      printf("Player %s enter your %d string or you can skip by pressing N: ",name2,j+1);
      gets(*(q+j));
      if(!(strlen(q[j])==1 && *q[j]=='N')){
        strcpy(*(pq+i+j),*(q+j));
        int score = checkWord(*(q+j),words,str,strPoints,pq,i+j+1);
        if(score==0)
          printf("Word is already entered\n");
        else{
          if(score==-1){
          printf("Wrong Word Entered! 3 Points Deducted\n");
          tScore[1]-=3;
        }
        else
          tScore[1]+=score;
        j++;
        q=realloc(q,(j+1)*sizeof(char*));
        pq=realloc(pq,(i+j+1)*sizeof(char*));
        }
      }
      printf("%s's Score: %d\n",name2,tScore[1]);
     }
    if(tScore[0]>tScore[1])
      printf("%s WIN", name1);
    else
      printf("%s WIN", name2);
   }
void strPointsDis(char *str,int *strpoints, char *brr, int* arr){
  int index,i,j;
  for(i=0;i<6;i++)
  { 
    index=0;
    for(j=0;j<26;j++)
      if(brr[j]==str[i]){
        index=j;
        strpoints[i]=arr[index];
      }
  }
}
void loadWords(char wordsList[][6]){
  FILE *wordFile = fopen("words.txt","r");
  if(wordFile==NULL){
    printf("Error: opening file\n");
    return;
  }
  int i=0;
  while(!feof(wordFile)){
    char word[50];
    fscanf(wordFile,"%s ",word);
    if(strlen(word)<=6){
      strcpy(*(wordsList+i),word);
      i++;
    }
  }
}
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void possibleString(char *str, int start, int end, char wordList[35580][6],char words[][6]) {
    if (start == end) {
        // printf("%s\n", str);
        int i;
        for(i=0;i<wordsFound;i++)
          if(!strcmp(words[i],str))
            return;
        for(i=0;i<35580;i++)
            if(!strcmp(wordList[i],str))
                strcpy(words[wordsFound++],str);
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(&str[start], &str[i]);
        possibleString(str, start + 1, end,wordList,words);
        swap(&str[start], &str[i]);
    }
}

void subStrings(char *str, int n,char wordList[35580][6],char words[][6]) {
    int i;
    for (i = 0; i < (1 << n); i++) {
        char word[10];
        int k,j;
        for (j = 0,k=0; j < n; j++) {
            if (i & (1 << j)) 
                word[k++] = str[j];
        }
        word[k] = 0;
        if(strlen(word)>1)
            possibleString(word,0,strlen(word)-1,wordList,words);
        // printf(" %s %d\n",word, strlen(word));
    }
    possibleString(str, 0,n-1,wordList,words);
}
int checkWord(char* word,char words[][6],char* str, int* strPoints, char** pq,int pqSize){
  int i,j;
  if(strlen(word)<2)
    return 0;
  for(i=0;i<strlen(word);i++)
    word[i] = toupper(word[i]);
  for(i=0;i<pqSize-1;i++){
    for(j=0;j<strlen(*(pq+i));j++)
      *(*(pq+i)+j) = toupper(*(*(pq+i)+j));
    if(!strcmp(word,*(pq+i)))
        return 0;
  }
  // for(i=0;i<sizeof(q)/sizeof((*q))-1;i++)
  //   if(!strcmp(word,*(q+i)))
  //     return 0;
  for(i=0;i<wordsFound;i++)
    if(strcmp(word,words[i])==0)
      return calPoints(word,str,strPoints);
  return -1;
}
int calPoints(char* word,char* str, int* strPoints){
 int score=0,i,j;
  for(i=0;i<strlen(word);i++)
    for(j=0;j<6;j++)
      if(str[j]==word[i]){
        score+=strPoints[j];
        break;
      } 
  return score;
}



void scramble(char *s) {
    int length = strlen(s);

    // Make all characters lowercase for consistency... otherwise, an uppercase letter could "give away" it is the first letter in the word
    for (int i = 0; i < length; i++)
        s[i] = tolower(s[i]);

    // Special case: we can't scramble a word of 1 character
    if (length == 1) return;

    // Special case: there is only one way to scramble a word of 2 characters
    if (length == 2) {
        char temp = s[0];
        s[0] = s[1];
        s[1] = temp;
        return;
    }

    // Keep a copy of the original unscrambled word so we can compare our scrambled version to it to determine if it is sufficiently scrambled
    char original[length + 1];
    strcpy(original, s);

    // Variables to help determine when to end the below (outer) loop
    double diff = 0;
    bool same_start = false;
    bool same_end = false;
    int times_stuck = 0;

    // Keep attempting to scramble the word until it is sufficiently scrambled
    do {
        // Scramble the word by finding two indexes at random in the string and swapping the characters at those indexes (so long as they are not the same index),
        // and do this as many times as there are characters in the word.
        int i = 0;
        while (i < length) {
            // Finds the two random positions in the string
            int pos1 = rand() % length;
            int pos2 = rand() % length;

            // Swap the characters at these positions so long as they are not the same
            if (pos1 != pos2) {
                char temp = s[pos1];
                s[pos1] = s[pos2];
                s[pos2] = temp;
                i++;
            }
        }

        // Compute how many characters are different when comparing the original string to the now scrambled string
        int differences = 0;
        for (int j = 0; j < length; j++)
            if (original[j] != s[j]) differences++;

        // Compute the fraction of how many characters are different (i.e., 0.5 means that half the characters are different)
        diff = (double) differences / length;

        // Check if the scrambled string has the same start and same end character as the original string
        same_start = s[0] == original[0];
        same_end = s[length - 1] == original[length - 1];

        // Increment times_stuck so we know how many times we've run the loop
        times_stuck++;

        // Keep attempting to scramble the string if:
        //    - the scrambled string and the original string have the same starting AND ending character... this is too easy for people to guess
        //    - less than half the characters are different when comparing the scrambled string to the original
        //
        // BUT stop trying to scramble the string if we have tried to scramble the string 100 times and still haven't been able to scramble it sufficiently.
        // This is to account for a possibly infinite loop if we are never able to meet the above scrambling conditions for some "weird reason" (maybe the
        // word has many of the same letters or letters, etc.).
        //
    } while (((same_start && same_end) ||
              (diff < 0.5)) &&
             (times_stuck < 100));
}

// Function to play the game for the selected difficulty level
void playGame(char (*selectedWords)[WORD_LENGTH], int wordCount, int *score) {
   int tries = 0;
   int k,choice;
    for (int i = 0; i < wordCount; ++i) {
        char original[WORD_LENGTH];
        char scrambled[WORD_LENGTH];
        char answer[WORD_LENGTH];
        k=rand()%(1+20);
        do{
          strcpy(original, selectedWords[k]);
          k=-1;
        }while(k!=-1);
        // Copy the selected word into original, then scramble the word using the scramble function
        // strcpy(original, selectedWords[]);
        strcpy(scrambled, original);
        scramble(scrambled);

        // Track the number of tries

        // Game loop for the current word
        while (tries < MAX_TRIES) {
            // Present the user with the scrambled word
            printf("Unscramble the word: %s\n\n", scrambled);

            // Ask them to enter the word
            printf("Answer: ");
            scanf("%s", answer);

            // If they guess correctly, increment the score, print a congratulatory message, and break out of the loop
            if (strcmp(answer, original) == 0) {
                printf("\nCongratulations! You got it!\n\n");
                *score += 1;
                printf("Your current score: %d\n\n", *score);
                if(*score==10){
                	printf("\nHmmm easy mood seems to be a piece of cake for you, lets move on to the medium one \n");
                	return;
				} if( *score==15){
					printf("\nBrave champ! lets go to the real game now extra hard \n");
                	return;
				} if(*score==20){
					return;
				}
                break;
            } else {
                printf("\nTry again! Remaining tries: %d\n\n", MAX_TRIES - tries - 1);
            }

            // Increment the number of tries
            tries++;

        // If the user couldn't guess correctly after MAX_TRIES attempts, reveal the correct answer
        if (tries == MAX_TRIES) {
            printf(" You couldn't guess the word. Let me tell you the correct answer first which is: %s\n\n", original);
            printf(" Lets continue \n");
            return;
        }
    }
}
}
int Return(){
  int choice;
    printf("\nDo you want to continue playing? (1. Yes / 2. No): ");
    scanf("%d", &choice);
    switch(choice){
      case 1:
      return 1;
      break;
      case 2:
      return 0;
      break;
}
}