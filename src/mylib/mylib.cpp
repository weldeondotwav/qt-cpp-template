#include <cstdlib>
#include <ctime>

int getRandomInteger() {
  srand(time(0));
  return rand() % 101;
}