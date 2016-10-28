#include <catch/catch.hpp>
#include <string>
#include "../Std_random.h"

// For to_string
using namespace std;


SCENARIO("Using the range methods") {

	int min{0};
	int max{99};
	int size{max - min + 1};

	GIVEN("A Std_random generator with range ["
			+ to_string(min) + ","
			+ to_string(max)
			+ "]") {

		Std_random rnd{min, max};

		WHEN("Getting the min") {
			THEN(to_string(min) + " is returned") {
				REQUIRE(min == rnd.min());
			}
		}

		WHEN("Getting the max") {
			THEN(to_string(max) + " is returned") {
				REQUIRE(max == rnd.max());
			}
		}
	}
}
