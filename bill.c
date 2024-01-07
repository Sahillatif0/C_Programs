#include <stdio.h>
int main(){
    int item1, item2, item3, item4, item5, itemTotal;
    float GST, grandTotal, totalProfit;
    printf("Enter price for item1: ");
    scanf("%d", &item1);
    printf("Enter price for item2: ");
    scanf("%d", &item2);
    printf("Enter price for item3: ");
    scanf("%d", &item3);
    printf("Enter price for item4: ");
    scanf("%d", &item4);
    printf("Enter price for item5: ");
    scanf("%d", &item5);
    itemTotal = item1+item2+item3+item4+item5;
    GST = (itemTotal*18)/100.0;
    grandTotal = itemTotal + GST;
    totalProfit = (itemTotal*15)/100.0;
    printf("\n\tSALMAN grocery Store\n\n");
    printf("---------------------------------------\n\n");
	printf("Description\t\t|\tPrice\n\n");
	printf("---------------------------------------\n\n");
    printf("Item 1\t\t\t|\t%d\n\n",item1);
	printf("Item 2\t\t\t|\t%d\n\n",item2);
	printf("Item 3\t\t\t|\t%d\n\n",item3);
	printf("Item 4\t\t\t|\t%d\n\n",item4);
	printf("Item 5\t\t\t|\t%d\n\n",item5);
	printf("---------------------------------------\n\n");
    printf("Item Total\t\t|\t%d\n\n", itemTotal);
    printf("G.S.T\t\t\t|\t%.2f\n\n", GST);
    printf("---------------------------------------\n\n");
    printf("Grand Total\t\t|\t%.2f\n\n\nTotal Profit Earned\t|\t%.2f", grandTotal, totalProfit);
}
