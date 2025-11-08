#include <cmath>

int external_resin(int time) {
  int external_resin = 0;

  // assumes 30 day months
  // assumes BP is maxed
  int week = time * 60 * 60 * 24 * 7;
  int month = time * 60 * 60 * 24 * 30;
  int patch = week * 6;
  // + 60 (1 transient resin from teapot) per week
  external_resin += 60 * (time / week);
  // + 60 (1 transient resin from theatre) per month
  external_resin += 60 * (time / month);
  // + 300 (5 Fragile resin from BP) per patch
  external_resin += 60 * (time / patch);

  return external_resin;
}

int time_to_resin(int time) {
  // 8 minutes per resin
  // assume always uncapped
  int resin = time / 480 + external_resin(time);
  return resin;
}
