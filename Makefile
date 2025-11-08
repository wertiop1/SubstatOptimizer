CXX_SOURCES = $(wildcard src/*.cpp)
HEADERS = $(wildcard src/*.h)

OBJ = ${CXX_SOURCES:.cpp=.o}

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror

main: $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -rf src/*.o 
	rm -rf main 

$(OBJ): $(HEADERS)
