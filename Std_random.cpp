#include "Std_random.h"


/**
 * Constructor.
 */
Std_random::Std_random(int min, int max)
	: engine{}, dist{min, max}
{
}


/**
 * Seed the random number generator.
 * Useful for testing.
 *
 * params:
 * 	val - Seed value.
 */
void Std_random::seed(long val) {
	engine.seed(val);
}


/**
 * Generate a random integer.
 *
 * return:
 * 	int - Random integer.
 */
int Std_random::generate() {
	return dist(engine);
}


/**
 * Returns the size of the range of possible values
 * this random number generator can generate.
 * (i.e. max_value - min_value).
 */
int Std_random::range_size() const {
	return max() - min() + 1;
}


/**
 *
 */
void Std_random::set_range(int min, int max) {
	dist = std::uniform_int_distribution<int>(min, max);
}


/**
 * Return the minimum possible value that
 * could be generated by this generator.
 */
int Std_random::min() const {
	return dist.min();
}


/**
 * Return the maximum possible value that
 * could be generated by this generator.
 */
int Std_random::max() const {
	return dist.max();
}

