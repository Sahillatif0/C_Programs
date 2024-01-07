#include<stdio.h>
int main(){
    int valuesF[2], i, possible=0;
    printf("Enter value of x and y respectively: ");
    scanf("%d %d", &valuesF[0],&valuesF[1]);
    for(i=0;i<2;i++){
    int valuesI[2]={1,1},steps = 0;
    for(valuesI[i];valuesI[i]<valuesF[i];steps++)
        valuesI[i]*=2;
    while(valuesI[i]!=valuesF[i])
        valuesI[i]-=valuesI[1-i];  
    for(valuesI[1-i];valuesI[1-i]<valuesF[1-i];steps++)
        valuesI[1-i]*=2;
    if(valuesI[1-i]==valuesF[1-i]){
        possible = 1;
        break;
    }        
}
	if(possible)
		printf("true");
	else
		printf("false");
    return 0;
}
