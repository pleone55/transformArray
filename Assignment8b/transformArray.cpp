/**************************************************************************
 * *Author: Paul Leone
 * *Date: 2/23/2019
 * *Description: The void function called transformArray takes two 
 * *		 parameters - a reference to a pointer to a dynamically
 * *		 allocated array of ints, and the size of that array. The
 * *		 pointer is passed by reference to change the value of 
 * *		 the pointer. The address of the new array should be
 * *		 assigned to the pointer that was passed as a parameter.
 * ************************************************************************/

#include <iostream>
/********************************************************************
 * This function takes two parameters, a reference to a pointer to 
 * dynamically allocateed array of ints, and the size of that array
 * ******************************************************************/

void transformArray(int* &oldArray, int size)
{
	//Create memory for new array 
	int *thisArray = oldArray;
	int newSize = size * 2;
	int* newArray = new int[newSize];

	//Use for loop to equate the element to the new array
	for(int i = 0; i < size; i++)
	{
		newArray[i] = thisArray[i];
	}

	//transform the elements in the new array
	for(int i = 0; i < size; i++)
	{
		newArray[size + i] = thisArray[i] * 2;
	}

	oldArray = newArray;

	//delete the memory for the created array
	delete [] thisArray;
}

int main()
{
	//create a dynamic array that is a size of 5
	int *myArray = new int[5];

	//assign values to the array
	myArray[0] = 5;
	myArray[1] = 4;
	myArray[2] = 7;
	myArray[4] = 8;

	//call the function with the array
	transformArray(myArray, 5);

	//Use for loop to print the array
	for(int i = 0; i < 10; i++)
	{
		std::cout << myArray[i] << std::endl;
	}

	//delete the array
	delete[] myArray;

	return 0;
}

