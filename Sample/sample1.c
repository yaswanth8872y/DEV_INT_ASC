#include <stdio.h>

// Function 1: Adds two numbers
int add(int a, int b) {
    return a + b;
}

// Function 2: Subtracts two numbers
int subtract(int a, int b) {
    return a - b;
}

// Function 3: Multiplies two numbers
int multiply(int a, int b) {
    return a * b;
    //Multiplication
}

// Function 4: Divides two numbers (safe check)
float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0.0;
    }
    return (float)a / b;
}

// Function 5: Prints a message
void printMessage() {
    printf("This is a message from printMessage() function!\n");
}

int main() {
    int x = 20, y = 5;

    printf("Add: %d\n", add(x, y));
    printf("Subtract: %d\n", subtract(x, y));
    printf("Multiply: %d\n", multiply(x, y));
    printf("Divide: %.2f\n", divide(x, y));

    printMessage();//will print messages
    printMessage();
    //insert new tab

    return 0;
}
