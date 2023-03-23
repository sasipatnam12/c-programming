#include<stdio.h>
int main(){
	int elements,num,i,A[20];
	printf("enter the number of elements ");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		printf("enter the element: ");
		scanf("%d",&A[i]);
	}
	printf("elents in the arry are");
	for(i=0;i<=num;i++){
		printf(" %d",A[i]);
	}
	return 0;
	
}