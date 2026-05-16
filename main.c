#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;
    char operationType;
    printf("");
    printf("Enter a choice (1) : ");
    scanf("%f",&num1);
    printf("Enter an process (+ , - , * ,or /) : ");
    scanf("  %c",&operationType);
    int i = 2;
    while(operationType != '!'){
        printf("Enter a choice (%d) : ",i);
        scanf("%f",&num2);
        switch(operationType){
            case '+':
                num1 = num1 + num2 ;
            break;
            case '-':
                num1 = num1 - num2 ;
            break;
            case '*':
                num1 = num1 * num2 ;
            break;
            case '/':
                if(num2 == 0){
                    printf("Please do not enter zero in the denominator.\n");
                }else{
                    num1 = num1 / num2 ;
                }
            break;
            default:
                printf("%c : The operation is wrong\nDon't worry, I will ignore the incorrect signal and the last value you entered.\n",operationType);
       }
        printf("You can use the (!) symbol to end calculations.\n");
        printf("Enter an process (+ , - , * ,or /) : ");
        scanf("  %c",&operationType);
        i++;
    }
    printf("\nProcess : %.2f\n",num1);

    return 0;
}
