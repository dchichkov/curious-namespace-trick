#include <stdio.h>

// output:
//  dmitry@t:~$ g++ func.cpp -DPLATFORM=common ; ./a.out 
//  common add
//  dmitry@t:~$ g++ func.cpp -DPLATFORM=arm ; ./a.out 
//  arm add

namespace project {
  // arm/math.h
  namespace arm {
    inline void add_() {printf("arm add\n");}  // try comment out
  }

  // math.h
  inline void add_() {
    //
    printf("common add\n");
    //
  } inline namespace PLATFORM {inline void add() {add_();}}


  inline void dot_() {
    //
    add();
    //
  } inline namespace PLATFORM {inline void dot() {dot_();}}
}

int main() {
 project::dot();
 return 1;
}
