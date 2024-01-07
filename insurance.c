#include <stdio.h>
int main(){
    int age, premiumRate, maxAmount;
    char gender, health, region;
    printf("Enter the age of the customer: ");
    scanf("%d", &age);
    if(age>=25 && age <=35){
    printf("Enter the gender of the customer (if Male type m, if female type f): ");
    scanf(" %c", &gender);
    printf("How is the health of the customer (type e for excellent, p for poor): ");
    scanf(" %c", &health);
    printf("Where does customer live? (type c for city, v for village): ");
    scanf(" %c", &region);
        if(gender=='m'){
            if(health=='e'){
                if(region=='c'){
                premiumRate = 4;
                maxAmount = 200000;
                printf("The person is insured and his Premium Rate = %d, Maximum Amount = %d", premiumRate, maxAmount);
                }
                else{
                    printf("The person is not insured");
                }
            }
            else{
                if(region=='v'){
                    premiumRate = 6;
                    maxAmount = 10000;
                    printf("The person is insured and his Premium Rate = %d, Maximum Amount = %d", premiumRate, maxAmount);
                }
                else{
                    printf("The person is not insured");
                }
            }
        }
        else{
            if(health=='e'){
                if(region=='c'){
                premiumRate = 3;
                maxAmount = 100000;
                printf("The person is insured and his Premium Rate = %d, Maximum Amount = %d", premiumRate, maxAmount);
                }
                else{
                    printf("The person is not insured");
                }
            }
            else{
                printf("The person is not insured");
            }
        }
    }
    else{
        printf("The person is not insured");
    }
}