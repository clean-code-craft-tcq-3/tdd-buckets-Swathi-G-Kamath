#include "currentRanges.h"
#include <assert.h>

void testTotalRangesWhenEntriesAreNull()
{
    float *arrayOfReadings = NULL;
    int totalReadings = 0;
    printArray (arrayOfReadings, totalReadings);
    assert(detectRanges(arrayOfReadings, totalReadings) == 0);
}

void testTotalRangesWhenEntriesareMixed()
{
    float arrayOfReadings[]={3, 3, 5, 4, 10, 11, 12};
    int totalReadings = sizeof(arrayOfReadings)/sizeof(arrayOfReadings[0]);
    printArray (arrayOfReadings, totalReadings);
    assert(detectRanges(arrayOfReadings, totalReadings) == 2);
}

void testTotalRangesForFloatentries()
{
    float arrayOfReadings[]={3.7, 1.2, 2.5, 4.5, 1.1, 11.2, 12.1,10.5,20,20.5};
    int totalReadings = sizeof(arrayOfReadings)/sizeof(arrayOfReadings[0]);
    printArray (arrayOfReadings, totalReadings);
    assert(detectRanges(arrayOfReadings, totalReadings) == 5);
}


int main()
{
	testTotalRangesWhenEntriesAreNull();
	testTotalRangesWhenEntriesareMixed();
	testTotalRangesForFloatentries();
	return 0;
}
