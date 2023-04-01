#include<stdio.h>
int i;
int main() {
	printf("Enter Value of age : ");
	scanf("%d",&i);
	if(i>=18)
	printf("Candidate is eligible to vote");
	else 
	printf("Candidate is not eligible to vote");
	return 0;
}
