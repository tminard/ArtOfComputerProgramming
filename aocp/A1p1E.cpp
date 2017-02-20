//
//  A1p1E.cpp
//  Art Of Computer Programming
//
//  Created by Tyler Minard on 2/19/17.
//
//

#include "A1p1E.h"

A1p1E::A1p1E(int m, int n)
: m(m), n(n), result(NULL)
{
}

/*
 E0. [Ensure m >= n] If m < n, m <-> n
 E1. Div m by n and let r be remainder (0 <= r < n)
 E2. [0 check] If r = 0, algorithm complete as n is answer
 E3. [Reduce] Set m <- n, n <- r, and go back to E1
 */
A1p1EResult* A1p1E::execute()
{
  int _r = -1;
  int _m = std::max(this->m, this->n);
  int _n = std::min(this->m, this->n);

  while (_r != 0) {
    _r = getRemainder(_m, _n);

    if (_r == 0) {
      break;
    }

    _m = _n;
    _n = _r;
  }

  this->result = { _n };

  return &this->result;
}


int A1p1E::getRemainder(int a, int b)
{
  int _v = a - b;

  if (_v <= 0) {
    return 0;
  } else if (_v < b) {
    return _v;
  } else {
    _v = getRemainder(_v, b);
  }

  return _v;
}
