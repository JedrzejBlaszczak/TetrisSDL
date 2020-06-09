#include "board.h"

Board::Board() {
	this->dim.height = HEIGHT;
	this->dim.width = WIDTH;

	boardFields = new unsigned int* [dim.width];
	for (int i = 0; i < dim.width; i++) {
		boardFields[i] = new unsigned int[dim.height];
	}
}

Board& Board::getInstance() {
	static Board board;
	return board;
}