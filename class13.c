#include <stdio.h>
#include <stdlib.h>

int main()
{
    char alphabet[] = {'A', 'B', 'C', 'D', 'E'};
    int indices[] = {0, 1, 2, 3, 4, 3, 2, 1, 0, 1, 2, 3, 2, 1, 0, 1, 2, 1, 0, 1, 0};
    int n = sizeof(indices)/sizeof(indices[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i * 2; j++) {
            printf(" ");
        }
        for (int j = indices[i]; j < 5 - indices[i]; j++) {
            printf("%c ", alphabet[j]);
        }
        printf("\n");
    }

    return 0;
}
A B C D E D C B A 
  A B C D C B A 
    A B C B A 
      A B A 
        A 
