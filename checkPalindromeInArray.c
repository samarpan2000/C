// checking whether the last digits of each element of an array forms a palindrome 
// or not

#include<stdio.h>
#include<math.h>

int isPalindrome(int number);

void main()
{
	int N = 0;
	int arr[10];
	int index = 0;
	int j = 0;
	int formedNumber = 0;
	
	printf("Enter no. of elements: ");
	scanf("%d", &N);
	printf("Enter %d elements of the array...\n", N);
	for(index=0; index<N; index++)
		scanf("%d", &arr[index]);
		
	for(index=N-1, j=0; index>=0; index--,j++)
		formedNumber += (arr[index]%10) * (int)pow(10,j);
	
	if(isPalindrome(formedNumber) == 1)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

int isPalindrome(int number)
{
	int copy = number;
	int reverse = 0;
	int output = 0;
	
	while(copy != 0)
	{
		reverse = reverse*10 + (copy%10);
		copy /= 10;
	}
	
	if(number == reverse)
		output = 1;
		
	return output;
}
