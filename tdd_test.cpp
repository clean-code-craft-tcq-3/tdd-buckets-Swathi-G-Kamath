#include "currentRanges.hpp"


TEST_CASE("Test the continuous ranges in given set of current ranges") 
{

  std::vector<int> currentReadings {1, 2, 4};
  std::vector<currentRanges> currentRangesList;
  currentRangesList = CalculateRangeAndReadings(currentReadings);
  assert(1 == currentRangesList.size());
  assert(true == currentRangesList.size());
  REQUIRE(currentRangesList[0].m_totalReadingContinuousRange == 2);
  REQUIRE(currentRangesList[0].m_startIndex == 1);
  REQUIRE(currentRangesList[0].m_endIndex == 2);

  ::std::vector<int> currentReadings1 {3, 3, 5, 4, 10, 11, 12};
  std::vector<currentRanges> currentRangesList1;
  currentRangesList1 = CalculateRangeAndReadings(currentReadings1);
  assert(2 == currentRangesList1.size());
  REQUIRE(currentRangesList1[0].m_totalReadingContinuousRange == 4);
  REQUIRE(currentRangesList1[0].m_startIndex == 3);
  REQUIRE(currentRangesList1[0].m_endIndex == 5);
  REQUIRE(currentRangesList1[1].m_totalReadingContinuousRange == 3);
  REQUIRE(currentRangesList1[1].m_startIndex == 10);
  REQUIRE(currentRangesList1[1].m_endIndex == 12);
}

TEST_CASE("Test ConvertAmpsListFromAToD Positive") 
{
   std::vector<int> ampsInAnalog {4094, 4000};
   std::vector<int> ampsInDigital = ConvertAmpsListFromAToD(ampsInAnalog);
   assert(false == ampsInDigital.empty());
   REQUIRE(ampsInDigital[0] == 10);
   REQUIRE(ampsInDigital[1] == 10);
}

TEST_CASE("Test ConvertAmpsListFromAToD Negative") 
{
   std::vector<int> ampsInAnalog {0, 4095};
   std::vector<int> ampsInDigital = ConvertAmpsListFromAToD(ampsInAnalog);
   assert(true == ampsInDigital.empty());
}

TEST_CASE("Test getAmpsInDigital")
{
	int ampsInAnalog = 4094;
	REQUIRE((getAmpsInDigital(ampsInAnalog)) == 10);
	
	ampsInAnalog = 1146;
	REQUIRE((getAmpsInDigital(ampsInAnalog)) == 3);
}
