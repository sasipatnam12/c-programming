#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* add_binary_strings(char* s1, char* s2) {
    // Convert binary strings to integers
    int num1 = strtol(s1, NULL, 2);
    int num2 = strtol(s2, NULL, 2);
    
    // Add the integers
    int result = num1 + num2;
    
    // Convert the result back to binary string
    char* binary_result = (char*) malloc(sizeof(char) * (32 + 1));
    itoa(result, binary_result, 2);
    
    return binary_result;
}

int main() {
    // Example 1
    char s1[] = "1101";
    char s2[] = "100101";
    char* result = add_binary_strings(s1, s2);
    printf("%s\n", result);  // Output: 110010
    free(result);

    // Example 2
    char s3[] = "1111001001111101";
    char s4[] = "10000";
    result = add_binary_strings(s3, s4);
    printf("%s\n", result);  // Output: 1111001010001101
    free(result);

    return 0;
}
output
110010
1111001010001101
