#include <stdio.h>

int main() {
    FILE *file_in, *file_out;
    char ch;

    file_in = fopen("input.txt", "r");
    file_out = fopen("output.txt", "w");

    if (file_in == NULL || file_out == NULL) {
        printf("Error opening file.");
        return 1;
    }

    while ((ch = fgetc(file_in)) != EOF) {
        fputc(ch, file_out);
    }

    fclose(file_in);
    fclose(file_out);

    printf("File copied successfully.\n");
    return 0;
}
