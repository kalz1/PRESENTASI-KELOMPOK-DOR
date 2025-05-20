#include <stdio.h>

// Function prototypes
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() {
    float a, b, result;
    int choice = 0;
    char lanjut;
    int first = 1;

    do {
        printf("\nOPTION:\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            if (first) {
                printf("Enter value of a: ");
                scanf("%f", &a);
                first = 0;
            }

            printf("Enter value of b: ");
            scanf("%f", &b);

            switch (choice) {
                case 1:
                    result = add(a, b);
                    printf("Result: %.2f\n", result);
                    break;
                case 2:
                    result = subtract(a, b);
                    printf("Result: %.2f\n", result);
                    break;
                case 3:
                    result = multiply(a, b);
                    printf("Result: %.2f\n", result);
                    break;
                case 4:
                    if (b == 0) {
                        printf("Error: Division by zero is not allowed.\n");
                        continue;
                    }
                    result = divide(a, b);
                    printf("Result: %.2f\n", result);
                    break;
            }

            printf("Do you want to continue with the result (y/n)? ");
            scanf(" %c", &lanjut);

            if (lanjut == 'y' || lanjut == 'Y') {
                a = result;
            } else {
                first = 1;
            }

        } else if (choice != 5) {
            printf("Invalid input. Please choose a valid option.\n");
        }

    } while (choice != 5); // Loop berhenti jika user memilih 5

    printf("Exiting program...\n");
    return 0;
}

// Function definitions
float add(float a, float b) {
    return a + b;
}

float subtract(float a, float b) 


float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) 