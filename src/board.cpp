#include "../headers/board.hpp"
#include <iostream>
#include <vector>

Board::Board(int width, int height) {
  for(int i = 0; i < height; i++) {
    std::vector<int> row;
    for(int j = 0; j < width; j++) {
      row.push_back(0);
    }
    this->grid.push_back(row);
  }
}

std::vector<std::vector<int>> Board::getGrid() {
  return this->grid;
}

void Board::display() {
  for(int i = 0; i < this->grid.size(); i++) {
    std::vector<int> row = this->grid[i];
    for(int j = 0; j < row.size(); j++) {
      std::cout << row[j];
    }
    std::cout << "\n";
  }
}
