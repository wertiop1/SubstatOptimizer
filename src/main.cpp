// System Headers
#include <fstream>
#include <iostream>

// Local Headers
#include "optimizer.h"
#include "resin.h"

int main() {
  int time = 60 * 60 * 24 * 7; // 1 week
  std::cout << time_to_resin(time) << std::endl;
}
