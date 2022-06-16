#include <vector>

using namespace std;

struct currentRanges
{
	int m_startIndex;
	int m_endIndex;
	int m_totalInRangeReadings;
	
	currentRanges()
	: m_startIndex(0)
	, m_endIndex(0)
	, m_totalInRangeReadings(1)
	{
	}
};

std::vector<currentRanges> updateRangeReadings(std::vector<int> periodicCurrentVector);
void checkForRangeContinuity(std::vector<int> sortedRanges, int currentIndex, currentRanges& currentRanges);
bool checkForContinuousRange(int currentIndex, int nextIndex);
