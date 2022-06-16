#include "currentRanges.hpp"
#include <algorithm> 
#include <iostream>

bool isValueContinuous(int currentIndex, int nextIndex)
{
   if(((nextIndex - currentIndex) == 1) || ((nextIndex - currentIndex) == 0))
   {
	   return true;
   }
   return false;
}

void checkForRangeContinuity(std::vector<int> sortedRange, int currentIndex, currentRanges& currentRange)
{
	int startIndex = sortedRange[currentIndex];
   for(int i = currentIndex; index < (sortedRange.size() - 1); index++)
   {
	   if(isValueContinuous(sortedRange[index], sortedRange[index + 1]))
	   {
		   currentRange.m_totalReadingContinuousRange ++;
		   currentRange.m_startIndex = startIndex;
		   currentRange.m_endIndex = sortedRange[index + 1];
	   }
	   else
	   {
		   break;
	   }
   }
}

std::vector<currentRanges> updateRangeReadings(std::vector<int> currentReadings)
{
    int currentIndex = 0;
	std::vector<currentRanges> currentRangeList;
	std::sort(currentReadings.begin(), currentReadings.end());
    while(true == (currentIndex < currentReadings.size()))
	{
	   currentRanges currentRanges;
           checkForRangeContinuity(currentReadings, currentIndex, currentRanges);
	   if(currentRanges.m_totalReadingContinuousRange > 1)
	   {
		  currentRangeList.push_back(currentRanges);
	      currentIndex = currentIndex + currentRanges.m_totalReadingContinuousRange - 1;
	   }
	   currentIndex++;
	}
	return currentRangeList;
}
