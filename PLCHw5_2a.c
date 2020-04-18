#include <stdio.h>

int main(void) {
  enum bears {Black, Brown, Grizzly, Polar};
  enum bears bear;

  bear++;
  bear = 2;
  bear = bear + 1;
  bear = bear - 1;
  bear = bear * 1;
  bear = bear / 1;
  bear = bear % 1;
  bear = Brown;
  bear = Brown + Black;
  bear += Polar;

}