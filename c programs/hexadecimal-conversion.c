#include <stdio.h>
#include <stdlib.h>

int main() {
    char hex_string[] = "61ff14";
    int integer_value;

    // Convert hexadecimal string to integer
    integer_value = (int)strtol(hex_string, NULL, 16);

    printf("Hexadecimal %s in integer is: %d\n", hex_string, integer_value);

    return 0;
}
