#include <stdio.h>

void add(int, int);
void subtract(int, int);
void multiply(int, int);
void divide(int, int);

int main() {
    int num1, num2;
    int choice;

    printf("Multiple functions to perform Arithmetic Operations\n");

    while(1) {
        
        printf("\nEnter first number: ");
        scanf("%d", &num1);
        printf("Enter second number: ");
        scanf("%d", &num2);

        
        printf("\nChoose Operation:\n");
        printf("[1] Addition\n");
        printf("[2] Subtraction\n");
        printf("[3] Multiplication\n");
        printf("[4] Division\n");
        printf("[5] Exit Program\n");

        printf("\nEnter choice [1-5]: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            case 5:
                printf("Exiting program ...\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
                break;
        }
    }
    return 0;
}

void add(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

void subtract(int a, int b) {
    printf("%d - %d = %d\n", a, b, a - b);
}

void multiply(int a, int b) {
    printf("%d * %d = %d\n", a, b, a * b);
}

void divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is undefined.\n");
    } else {
        printf("%d / %d = %.2f\n", a, b, (float)a / b);
    }
}

