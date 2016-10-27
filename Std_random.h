#ifndef STD_RANDOM_H
#define STD_RANDOM_H

#include "Random_generator.h"
#include <random>
#include <string>


/**
 * A random number generator using the standard
 * library random number generator.
 */
class Std_random : public Random_generator {
public:
	Std_random(int, int);
	void seed(long) override;
	int generate() override;
	int range_size() const override;
	void set_range(int, int) override;
	int min() const override;
	int max() const override;
	std::string name() const override { return "Std_random"; }

private:
	std::default_random_engine engine;
	std::uniform_int_distribution<int> dist;
};

#endif

