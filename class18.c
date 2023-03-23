#include <stdio.h>
#include <stdlib.h>

#define MAX_LINES 1000
#define MAX_LINE_LENGTH 100

int main() {
    char filename[100];
    printf("Input the file name to be opened: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    char lines[MAX_LINES][MAX_LINE_LENGTH];
    int line_count = 0;

    char buffer[MAX_LINE_LENGTH];
    while (fgets(buffer, MAX_LINE_LENGTH, file)) {
        if (line_count >= MAX_LINES) {
            printf("Maximum number of lines reached.\n");
            break;
        }

        strncpy(lines[line_count], buffer, MAX_LINE_LENGTH);
        line_count++;
    }

    fclose(file);

    printf("%d lines read from file %s:\n", line_count, filename);
    for (int i = 0; i < line_count; i++) {
        printf("%s", lines[i]);
    }

    return 0;
}
