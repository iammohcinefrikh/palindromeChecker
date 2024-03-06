#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int inputNumber, originalInputNumber, reversedInputNumber, remainder;
	
	printf("Enter an Integer number: ");
	scanf("%d", &inputNumber);
	originalInputNumber = inputNumber;
	
	while(inputNumber > 0) {
		remainder = inputNumber % 10;
		reversedInputNumber = reversedInputNumber * 10 + remainder;
		inputNumber /= 10;
	}
	
	if (originalInputNumber == reversedInputNumber){
		printf("%d is a palindrome.", originalInputNumber);
	}    
    else {
    	printf("%d is not a palindrome.", originalInputNumber);
    }
	return 0;
}
