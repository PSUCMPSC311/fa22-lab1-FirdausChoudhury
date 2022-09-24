#include "student.h"
#include <stdio.h>

int squareOfSmallest(int array[], int length) {
	int smallest = array[0];
	for(int i=1; i<length; i++)
	{
		if (array[i] < smallest){
			smallest = array[i];  // finds the smallest integer within the array
		}
	}
	
	return smallest*smallest;       // returns the square of the smallest integer
}

int findMin(int *nums, int numsSize){
	int smallest = *nums;
	for (int i = 0; i < numsSize; i++)    // iterates through all elements of the array
	{
		if (nums[i] < smallest)       // compares the current element with the smallest array that came before it 
			smallest = nums[i];   // if it finds a smaller number, it replaces the value
	}
	
	return smallest;        // returns the smallest integer within the list
}

bool isPalindrome(char str[]){
	int size = strlen(str);  //finds size of the string
	for(int i = 0; i<size; ++i)     //  checks whether the element is equal to its corresponding elemnt from the back
	{

		if (str[i] != str[size-i-1])  //if its not, then it goes into the if statement and returns false
			return false;  
	}
	
	return true;   // returns true if its a pallindrome
}

int freqOfChar(char str[], char key){
	int i = 0;
	int count = 0;
	while(str[i] != 0) //iterates until null pointer is passed
	{
		if(str[i] == key)  //checks if key is found within the array 
			count++;   //if key is found then it adds a tally to the counter
		i++;
	}
	return count;
}

void sort(int array[],int length)
{
	for(int i=0; i<length; ++i) //takes a singular element
	{
		for(int j=i+1; j<length;++j) // compares with every element within the array
		{
			if(array[i]>array[j]) //checks whether the element is smaller than the element
			{
				int tmp = array[i];      //if the i index element is smaller than j
				array[i] = array[j];     //then the element is swapped is kept in a temporary varaibale
				array[j] = tmp; 	 //and then swapped
			}
		}
	}
}

int* twoSum(int* nums, int numsSize, int target)
{
	int* sumArr[2];
	for(int i=0; i<numsSize; i++)  //takes one element of the array and iterates it throught the whole array
	{
		for (int j = i+1; j<numsSize; j++) // takes all elements after i element
		{
			if(nums[i]+nums[j] == target) //checks whether the 2 elements add up to the target
			{
				sumArr[0] = &(nums[i]); //places the 2 values within a new array
				sumArr[1] = &(nums[j]);
				break;
			}
			
		}
	}
	return *sumArr;   //returns the new array
}

int* decryptPointer(int array[], int length, int *key[])
{
	int *newArr;    //makes a new array
	newArr = (int*) malloc(length * sizeof(int));    //initiates new array
	for(int i = 0; i<length; i++)  //iterates through whole array
	{
		newArr[i] = array[i]+ *key[i];     // adds the value of the given array with the key value while dereferencing it
	}
	return newArr;  //returns new array
}




