#include <stdio.h>

int main() {
  int matrix[3][3] = {{1, 4, 3},
                      {4, 2, 6},
                      {7, 1, 3}};
  int sum = 0;

  printf("Diagonal elements are: ");
  for(int i = 0; i < 3; i++) {
    sum += matrix[i][i]; // add the diagonal element to the sum
    printf("%d ", matrix[i][i]); // print the diagonal element
  }

  printf("\nSum of diagonal elements is: %d\n", sum);

  return 0;
}

