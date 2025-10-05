#include <stdio.h>
#include <string.h>

void echoString(char str[]) {
    printf("You entered: %s\n", str);
}

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0; // Remove newline character
    echoString(input);
    return 0;
}