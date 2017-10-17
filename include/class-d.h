// copyright 2017 Tartness

#ifndef CLASS_D_H_
#define CLASS_D_H_

#include <iostream>
#include <vector>

class ClassD {
 public:
  ClassD();
  unsigned int getCounter() {
    return ++counter_;
  }
  void printCounter();
 private:
  static unsigned int counter_;
};

#endif  // CLASS_D_H_
