#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2;
    char opr;
    printf("Enter: ");
    scanf("%f %c %f", &num1, &opr, &num2);
    switch (opr)
    {
    case '+':
        printf("%f", num1 + num2);
        break;

    case '-':
        printf("%.9g", num1 - num2);
        break;

    case '*':
        printf("%.9g", num1 * num2);
        break;
    
    case '/':
        printf("%.9g", num1 / num2);
        break;
    
    case '^':
        printf("%.9g", pow(num1, num2));
        break;
    
    default:
        printf("Fail");
        break;
    }
    return 0;
}