#ifndef BOARD_HPP
#define BOARD_HPP

#include <vector>

class Board {
  private:
    int width;
    int height;
    std::vector<std::vector<int>> grid;
  public:
    Board(int width, int height);
    std::vector<int>* getGrid();
    void display();
};

#endif
