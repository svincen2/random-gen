#ifndef RANDOM_GENERATOR_H
#define RANDOM_GENERATOR_H

#include <string>


/**
 * An interface for a random number generator.
 * Author: Sean Vincent.
 */
class Random_generator {
public:
	virtual void seed(long) = 0;
	virtual int generate() = 0;
	virtual int range_size() const = 0;
	virtual void set_range(int, int) = 0;
	virtual int min() const = 0;
	virtual int max() const = 0;
	virtual std::string name() const = 0;
};

#endif

