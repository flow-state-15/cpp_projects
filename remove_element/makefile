CXX = clang++
CXXFLAGS = -Wall -g -O0
SOURCES = main.cpp print_message.cpp
OBJECTS = ${SOURCES:.cpp=.o}
TARGET = program

all: ${TARGET}
	./${TARGET}

${OBJECTS}: %.o: %.cpp #compile sources individually
	${CXX} -c $< -o $@

${TARGET}: ${OBJECTS} #link objects
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${TARGET}	

clean: #cleanup build artifacts
	rm -rf ${OBJECTS} ${TARGET}