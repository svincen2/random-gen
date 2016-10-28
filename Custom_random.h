#ifndef CUSTOM_RANDOM_H
#define CUSTOM_RANDOM_H 

#include "Random_generator.h"
#include <string>


class Custom_random : public Random_generator {
public:
	void seed(long) override;
	int generate() override;
	int range_size() const override;
	void set_range(int, int) override;
	int min() const override;
	int max() const override;
	std::string name() const override;
private:

};

#endif

