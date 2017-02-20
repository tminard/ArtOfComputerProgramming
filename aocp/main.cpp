//
//  main.cpp
//  Art Of Computer Programming
//
//  Created by Tyler Minard on 2/19/17.
//
//

#include <iostream>
#include <memory>

#include "A1p1E.h"

int main(int argc, const char * argv[]) {

  std::cout << "A1P1E: ";
  std::unique_ptr<A1p1E> a1p1e(new A1p1E(7, 3));
  std::cout << a1p1e->execute()->finalRemainder << "\n";

  std::cout << "\n" << "Hello, World!\n";
    return 0;
}
