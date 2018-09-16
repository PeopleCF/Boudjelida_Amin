SOURCES=ConsoleApplication2.cpp Factory.cpp FileReader.cpp  FileWriter.cpp IProcessor.cpp ProcessorA.cpp ProcessorB.cpp ProcessorC.cpp WrongCharException.cpp stdafx.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=ConsoleApplication2.exe

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)	
	g++ --std=c++11 -Wall $(OBJECTS) -o $@

.cpp.o:
	g++ --std=c++11 -Wall -c $< -o $@