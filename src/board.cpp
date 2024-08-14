#include "../headers/board.hpp"
#include <iostream>
#include <vector>

Board::Board(int width, int height) {
  std::vector<std::vector<int>> arr;

  for(int i = 0; i < height; i++) {
    std::vector<int> row;
    for(int j = 0; j < width; j++) {
      row.push_back(0);
    }
    arr.push_back(row);
  }
}

std::vector<int>* Board::getGrid() {

}

void Board::display() {
  int width = this->getGrid()->size();
  for(int i = 0; i < width; i++) {
    std::cout << this->;
  }
}
