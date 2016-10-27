project = RNG_tester
src = $(wildcard *.cpp)
obj = $(patsubst %.cpp, %.o, $(src))
CPP_FLAGS = -std=c++11

$(project): $(obj)
	g++ $(CPP_FLAGS) -o $(project) $(obj)

$(obj): $(src)
	g++ $(CPP_FLAGS) -c $(src)

clean:
	rm $(patsubst %.cpp, %.o, $(src)) $(project)

