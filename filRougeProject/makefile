SRC=main.cpp Cercle.cpp Rectangle.cpp Liste.cpp
#SRC=$(wildcard *.cpp)  
EXE=fileRouge

CXXFLAGS+=-Wall -Wextra -MMD -g -O2
LDFLAGS= 

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

$(EXE): $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch

-include $(DEP)
