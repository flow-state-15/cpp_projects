CXX = clang++
CXXFLAGS = -Wall -g -O0
SOURCES = main.cpp
OBJECTS = ${SOURCES:.cpp=.o}
TARGET = program

all: ${TARGET}
	./${TARGET}

${OBJECTS}: ${SOURCES} #compile sources
	${CXX} -c $< -o $@

${TARGET}: ${OBJECTS} #link objects
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${TARGET}	

clean: #cleanup build artifacts
	rm -rf ${OBJECTS} ${TARGET}