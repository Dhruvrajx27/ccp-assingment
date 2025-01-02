#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    // Asking the user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Reading input string

    // Calculating the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Displaying the length
    printf("The length of the string is: %d\n", length);

    return 0;
}
