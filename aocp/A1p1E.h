//
//  A1p1E.hpp
//  Art Of Computer Programming
//
//  Created by Tyler Minard on 2/19/17.
//
//

#ifndef A1p1E_hpp
#define A1p1E_hpp

#include <stdio.h>
#include <algorithm>
#include "Algorithm.h"

struct A1p1EResult : public AlgorithmResult
{
  A1p1EResult(int result) : finalRemainder(result) {}
  int finalRemainder;
};

class A1p1E : public Algorithm
{
private:
  int m, n;
  A1p1EResult result;
  int getRemainder(int a, int b);

public:
  A1p1E(int m, int n);

  A1p1EResult* execute();
};

#endif /* A1p1E_hpp */
