#include "currentRanges.h"

int detectRanges(const float* readings, int totalreadings)
{
    int totalNumberOfRanges = 0;
   
    if((readings != NULL) && (totalreadings > 0))	
    {	   
	  float sortedArray[total];
   	
  	
      bubbleSortAscending(readings, totalreadings, sortedArray);
  
      float rangeMin = sortedArray[0];
      float rangeMax = sortedArray[0];
      int n_inRange = 1;
	
      for (int i=0; i < totalreadings;i++)
      {
        if(!(i == (totalreadings-1)))
        {
            if((sortedArray[i+1] - sortedArray[i])<= 1.0f)
	        {
		      n_inRange++;
		      rangeMax = sortedArray[i+1];
		      continue;
	        }    
        }
	    else
	    {
	        rangeMax = sortedArray[numOfReadings-1];
	    }
		printf("%.2f - %.2f , %d\n",rangeMin, rangeMax,n_inRange);
        totalNumberOfRanges = 1;
	    rangeMin = sortedArray[i+1];
		rangeMax = sortedArray[i+1];
	    totalNumberOfRanges++;
      }	
    }
    else
    {
       printf("NULL array input");
    }
 
	return totalNumberOfRanges;
 
}
