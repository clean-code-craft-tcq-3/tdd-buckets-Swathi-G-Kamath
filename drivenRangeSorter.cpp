#include "currentRanges.h"
#include <stdio.h>

void bubbleSortAscending(const float* inputArray, int totalReadings, float* sortedArray)
{
   
   
   for(int i=0; i< totalReadings ; i++)
   {
		sortedArray[i] = inputArray[i];
   }
      

  for (int j = 0 ; j < totalReadings; j++)
  {
    for (int k = 0 ; k < totalReadings - j - 1; k++)
    {
      if (sortedArray[k] > sortedArray[k+1]) 
      {
        temp       = sortedArray[k];
        sortedArray[k]   = sortedArray[k+1];
        sortedArray[k+1] = temp;
      }
    }
  }
       
   printArray (sortedArray,totalReadings);
   
} 

void printArray (float *arrayIndex, int arraysize)
{
	if (arraysize <= 0)
	{
		std::cout<<"Null Array";
	}
	else
	{
		for(int i=0; i< arraysize ; i++)
		{
			std::cout<<arrayIndex[i];
		}
	}
}
