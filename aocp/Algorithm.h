//
//  Algorithm.hpp
//  Art Of Computer Programming
//
//  Created by Tyler Minard on 2/19/17.
//
//

#ifndef Algorithm_hpp
#define Algorithm_hpp

#include <stdio.h>

struct AlgorithmResult { };

class Algorithm {
private:
public:
  virtual AlgorithmResult* execute() { return new AlgorithmResult; };
};

#endif /* Algorithm_hpp */
