CXX = g++
CXXFLAGS = -Wall -Wextra
LDFLAGS = -lncurses

SRC = src/main.cpp src/Board.cpp
OUT = tetris

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT) $(LDFLAGS)

clean:
	rm -f $(OUT)