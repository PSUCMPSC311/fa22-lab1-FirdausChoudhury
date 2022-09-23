#include "student.h"
#include <stdio.h>

int squareOfSmallest(int array[], int length) {
	int smallest = array[0];
	for(int i=1; i<length; i++)
	{
		if (array[i] < smallest){
			smallest = array[i];
		}
	}
	
	return smallest*smallest;
}

int findMin(int *nums, int numsSize){
	int smallest = *nums;
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] < smallest)
			smallest = nums[i];
	}
	
	return smallest;
}

bool isPalindrome(char str[]){
	int size = strlen(str);
	for(int i = 0; i<size; ++i)
	{

		if (str[i] != str[size-i-1])
			return false; 
	}
	
	return true; 
}

int freqOfChar(char str[], char key){
	int i = 0;
	int count = 0;
	while(str[i] != 0)
	{
		if(str[i] == key)
			count++;
		i++;
	}
	return count;
}

void sort(int array[],int length)
{
	for(int i=0; i<length; ++i)
	{
		for(int j=i+1; j<length;++j)
		{
			if(array[i]>array[j])
			{
				int tmp = array[i];
				array[i] = array[j];
				array[j] = tmp; 
			}
		}
	}
}

int* twoSum(int* nums, int numsSize, int target)
{
	int* sumArr[2];
	for(int i=0; i<numsSize; i++)
	{
		for (int j = i+1; j<numsSize; j++)
		{
			if(nums[i]+nums[j] == target)
			{
				sumArr[0] = &(nums[i]);
				sumArr[1] = &(nums[j]);
				break;
			}
			
		}
	}
	return *sumArr;
}

int* decryptPointer(int array[], int length, int *key[])
{
	int *newArr; 
	newArr = (int*) malloc(length * sizeof(int));
	for(int i = 0; i<length; i++)
	{
		newArr[i] = array[i]+ *key[i];
	}
	return newArr;
}




