#include <stdio.h>

int main() {
   float num1, num2;
    char op;

    printf("Enter an operator: ");
    scanf("%c", &op);

    printf("Enter 1st numbers: ");
    scanf("%f",&num1);
        printf("Enter 2nd numbers: ");
            scanf("%f",&num2);

    if (op == '+')
        printf("Result = %f", num1 + num2);
    else if (op == '-')
        printf("Result = %f", num1 - num2);
    else if (op == '*')
        printf("Result = %f", num1 * num2);
    else if (op == '/'){
        if(num2==0)
        printf("Invalid");
    else
        printf("Result = %f", num1 / num2);
    }


        else printf("Invalid Operator");

    return 0;
}