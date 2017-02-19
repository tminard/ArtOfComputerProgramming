//
//  A1p1E.cpp
//  Art Of Computer Programming
//
//  Created by Tyler Minard on 2/19/17.
//
//

#include "A1p1E.h"

A1p1E::A1p1E(int m, int n)
: m(m), n(n)
{
}

/*
 E0. [Ensure m >= n] If m < n, m <-> n
 E1. Div m by n and let r be remainder (0 <= r < n)
 E2. [0 check] If r = 0, algorithm complete as n is answer
 E3. [Reduce] Set m <- n, n <- r, and go back to E1
 */
void A1p1E::execute()
{

}
