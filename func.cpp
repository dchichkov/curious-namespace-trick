#include <stdio.h>

// output:
//  dmitry@t:~$ g++ -std=c++11 func.cpp -Dplatform=common ; ./a.out 
//  common add
//  dmitry@t:~$ g++ -std=c++11 func.cpp -Dplatform=arm ; ./a.out 
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
  } inline namespace platform {inline void add() {add_();}}


  inline void dot_() {
    //
    add();
    //
  } inline namespace platform {inline void dot() {dot_();}}
}

int main() {
 project::dot();
 return 1;
}
