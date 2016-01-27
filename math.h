#pragma once
#include <stdio.h>
#include "platform.math.h"

namespace vision {
    inline void add_() {
        // wonderfull code
        printf("arm add\n");
        // wonderfull code
    } inline namespace platform {inline void add() {add_();}}
    
    void mul_();  
    inline namespace platform {inline void mul() {mul_();}}
    
    // math.h
    template<typename T> inline void addT_() {
      // wonderfull code
      printf("common addT\n");
      // mode code
      // even more code
    } inline namespace platform {template<typename T>  inline void addT() {addT_<T>();}}
}
