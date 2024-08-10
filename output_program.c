#include <stdio.h>

int main() {
    char buffer[100]; // Define a buffer to store the input string

    printf("Enter a string: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("You entered: %s", buffer);
    } else {
        printf("Error reading input.");
    }

    return 0;
}
