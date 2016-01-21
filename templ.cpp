#include <stdio.h>

// output:
//  dmitry@t:~$ g++ templ.cpp -Dplatform= ; ./a.out 
//  common add
//  dmitry@t:~$ g++ templ.cpp -Dplatform=arm ; ./a.out 
//  arm add

namespace project {
  // arm/math.h
  namespace arm {
    template<typename T> inline void add_() {printf("arm T add\n");}
  }

  // math.h
  template<typename T> inline void add_() {
    // wonderfull code
    printf("common T add\n");
    // mode code
    // even more code
  } inline namespace platform {template<typename T>  inline void add() {add_<T>();}}


  template<typename T> inline void dot_() {
    // wonderfull code
    add<T>();
    // this dot template function is a long one

  } inline namespace platform {template<typename T> inline void dot() {dot_<T>();}}
}

int main() {
 project::dot<int>();
 return 1;
}
