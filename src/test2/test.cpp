#include "mylib/lib.h"

int ff(int x) {
  return 2 / x;
}

int main(int argc, char *argv[]) {
  if (argc < 5) {
    return myfun(false, ff) != 0;
  } else {
    argc = myfun(false, ff);
    return argc == 0;
  }
}
