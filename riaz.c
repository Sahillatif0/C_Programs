#include <stdio.h>
#include <conio.h>

int main() {
int rankA[5], rankB[5], same[5];
int samea = 0, sameb = 0, winsA = 0, winsB = 0, draw = 0;
char suitA[5], suitB[5], play='Y';

while (play=='Y') {

for (int i=1; i <=5;) {
printf("\nEnter Alice's %d cards' rank (2-14) and suit respectively (c,h,d,s): ",i);
scanf("%d %c", &rankA[i], &suitA[i]);
if(rankA[i]<2 && rankA[i]>14) {
printf("\nWrong rank try again");
} else {
if(suitA[i]!='h'&&suitA[i]!='c'&&suitA[i]!='d'&&suitA[i]!='s') {
printf("\nWrong suit try again");
} else {
i++;

}

}
}

for (int i=1; i <=5;) {
printf("\nEnter Bob's %d cards' rank (2-14) and suit respectively (c,h,d,s): ",i);
scanf("%d %c", &rankB[i], &suitB[i]);
if(rankB[i]<2 && rankB[i]>14) {
printf("\nWrong rank try again");
} else {
if(suitB[i]!='h'&& suitB[i]!='c'&& suitB[i]!='d'&& suitB[i]!='s') {
printf("\nWrong suit try again");
} else {
i++;
}
}
}
for(int i=0; i<5; i++) {
same[i]=0;
}
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
if (i != j && rankA[i] == rankA[j]) {
same[i]=same[i]+1;
}
}
samea += same[i];
}

for(int i=0; i<5; i++) {
same[i]=0;
}
for (int i = 0; i < 5; i++) {
for (int j = 0; j < 5; j++) {
if (i != j && rankB[i] == rankB[j]) {
same[i]++;
}
}
sameb += same[i];
}

if (samea>sameb) {
if (samea>=4) {
printf("Alice wins\n");
winsA++;
} else {
printf("Draw\n");
draw++;
}
} else if (sameb>samea) {
if (sameb>=4) {
printf("Bob wins\n");
winsB++;
} else {
printf("Draw\n");
draw++;
}
} else {
printf("Draw\n");
draw++;
}
printf("Do you want to play another game? (Y/N): ");
play = getche();
}

printf("Alice's wins: %d\nBob's wins: %d\nDraws: %d\n", winsA, winsB, draw);

return 0;
}