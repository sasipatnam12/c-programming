#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // skip even numbers
        }
        printf("%d ", i);
    }

    return 0;
}
output
1 3 5 7 9 
