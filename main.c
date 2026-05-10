#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;
    float process;
    char operationType;
    printf("Enter a choice (1) : ");
    scanf("%f",&num1);
    printf("Enter an process (+ , - , * ,or /) : ");
    scanf("  %c",&operationType);
    printf("Enter a choice (2) : ");
    scanf("%f",&num2);
    switch(operationType){
    case '+':
        process = num1 + num2 ;
        printf("The Sum is %.2f\n",process);
        break;
    case '-':
        process = num1 - num2 ;
        printf("The subtract is %.2f\n",process);
        break;
    case '*':
        process = num1 * num2 ;
        printf("The multiplication is %.2f\n",process);
        break;
    case '/':
        if(num2 == 0){
            printf("Please do not enter zero in the denominator.");
        }else{
            process = num1 / num2 ;
            printf("The division is %.2f\n",process);
        }
        break;
    default:
        printf("%c : The operation is wrong\n",operationType);
    }
    return 0;
}
