CXX = clang++
CXXFLAGS = -Wall -g -O0 -std=c++20
TARGET = program
SOURCES = main.cpp int_array_dynamic.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: ${TARGET}
	./${TARGET}

${OBJECTS}: %.o: %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

${TARGET}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${TARGET}

clean:
	rm -rf ${OBJECTS} ${TARGET}