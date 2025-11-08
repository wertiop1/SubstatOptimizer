// System Headers
#include <fstream>
#include <iostream>

// Local Headers
#include "optimizer.h"
#include "resin.h"
#include "stats.h"

int main() {
  int time = 60 * 60 * 24 * 7; // 1 week
  std::cout << time_to_resin(time) << std::endl;
  print_stats();
  HP_P = 46.6;
  ATK_P = 46.6;
  DEF_P = 46.6;
  FlatHP = 4280;
  FlatATK = 311;

  print_stats();
}
