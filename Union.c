/* C calcutor program using union */

#include <stdio.h>

union calculator {    // Define the union named codewindow.
    int num; // input number in my calc
    float res; //get the result in my calc
    char opr; // select the operator in my calc
};  // Declare three variables num, res and opr of different data types.

struct calc {    // Define the structure named calculator.
    int num; // input the numbers
    float res; // get the result
    char opr; // use the operator
};  // Declare three variables num, res and opr of different data types.

int main() {
    union calculator u;
    int size = sizeof(u);    // Use the keyword sizeof() to find the size of a union and print the same.
printf("The size of union used in the C program calculator is = %d\n", size);

int main(); {
    struct calc u;
    int size = sizeof(u);    // Use the keyword sizeof() to find the size of a structure and print the same.

    printf("The length of structures used in the C program calculator is = %d\n", size);

    return 0;
}

}
