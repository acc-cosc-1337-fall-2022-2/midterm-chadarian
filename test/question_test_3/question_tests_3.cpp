#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test roll die func")
{

	int i = 0;
	int roll = 0;

	do
	{
		
		roll = roll_die(); 
		
		if (roll == 1)
		{
			REQUIRE(roll == 1);
		}
		else if (roll == 2)
		{
			REQUIRE(roll == 2);
		}
		else if (roll == 3)
		{
			REQUIRE(roll == 3);
		}
		else if (roll == 4)
		{
			REQUIRE(roll == 4);
		}
		else if (roll == 5)
		{
			REQUIRE(roll == 5);
		}
		else if (roll == 6)
		{
			REQUIRE(roll == 6);
		}
		i++;
	}
	while (i < 10);


}
