#pragma once

#define WIDTH 10
#define HEIGHT 20

struct Dimensions {
	unsigned int height;
	unsigned int width;
};

class Board {
private:
	Board();
	Board(const Board&);
	
	Dimensions dim;
	unsigned int** boardFields;

public:
	static Board& getInstance();

};