/* Pt 1, Using Unions */

#include <stdio.h>
#include <stdlib.h>

union calculator
{
	int num1, num2; // the two numbers to calculate
	char opr; //operation +,-,*,/
	float res; // the result
} calculator;

int main()
{
    int num1, num2; //input of two numbers
	char opr; // the math operation
	float res; // the result

    do {
        printf("Select an operation to perform"); // ask the user what to perform
        printf("+|-|/|* \n"); // asks the user to pick a math operator
        scanf_s("%c", &opr); // stores the operator

        switch (opr)
        {
        case '+': // addition case
            // Add two numbers  
            printf(" You chose: Addition");
            printf("\n Enter First Number: ");
            scanf_s(" %d", &num1);
            printf(" Enter Second Number: ");
            scanf_s(" %d", &num2);
            res = num1 + num2; // Add two numbers  
            printf(" Addition of two numbers is: %.2f", res);
            break; // break the function  

        case '-':
            // Subtract two numbers  
            printf(" You chose: Subtraction");
            printf("\n Enter First Number: ");
            scanf_s(" %d", &num1);
            printf(" Enter Second Number: ");
            scanf_s(" %d", &num2);
            res = num1 - num2; // subtract two numbers  
            printf(" Subtraction of two numbers is: %.2f", res);
            break; // break the function  

        case '*':
            // Multiplication of the numbers  
            printf(" You chose: Multiplication");
            printf("\n Enter First Number: ");
            scanf_s(" %d", &num1);
            printf(" Enter Second Number: ");
            scanf_s(" %d", &num2);
            res = num1 * num2; // multiply two numbers  
            printf(" Multiplication of two numbers is: %.2f", res);
            break; // break the function  

        case '/':
            // Division of the numbers  
            printf(" You chose: Division");
            printf("\n Enter First Number: ");
            scanf_s(" %d", &num1);
            printf(" Enter Second Number: ");
            scanf_s(" %d", &num2);
            if (num2 == 0)
            {
                printf(" \n Divisor cannot be zero. Please enter another value "); //error message when problem is divided by 0
                scanf_s("%d", &num2);
            }
            res = num1 / num2; // divide two numbers  
            printf(" Division of two numbers is: %.2f", res);
            break; // break the function
        }
    } while (opr);

    return 0;
}