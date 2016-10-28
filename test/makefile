project = test
runner = test.o
src = $(filter-out $(runner:.o=.cpp), $(wildcard *.cpp))
obj = $(src:.cpp=.o)
dep = $(addprefix ../, $(patsubst %_test.o, %.o, $(obj)))
CPP_FLAGS = -std=c++11 -I/home/sean/Documents/code/cpp/code/include

$(project): $(runner) $(obj)
	g++ $(CPP_FLAGS) -o $(project) $^ $(dep)

$(runner): $(runner:.o=.cpp)
	g++ $(CPP_FLAGS) -c $^

$(obj): $(src)
	g++ $(CPP_FLAGS) -c $^

clean:
	rm $(obj) $(project)

