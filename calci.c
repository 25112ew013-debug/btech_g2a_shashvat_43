#include <stdio.h>

int main() {
     float num1, num2, result;
    char operator;
   
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    
    
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2f", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2f", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2f", result);
            break;

        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result = %.2f", result);
            } else {
                printf("Error! Division by zero is not allowed.");
            }
            break;

        default:
            printf("Invalid operator!");
    }

    return 0;
}
