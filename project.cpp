#include <stdio.h>
#include "math.h"

// output:
//$ g++ project.cpp math.cpp -Inull
//  arm add
//  arm addT
//  arm mul
//$ g++ project.cpp math.cpp arm/platform.math.cpp -Iarm
//  arm add
//  arm addT
//  arm mul

namespace vision {
  void dot() {
     add();
     addT<int>();
     mul();
  }
}

int main() {
 vision::dot();
 return 1;
}
