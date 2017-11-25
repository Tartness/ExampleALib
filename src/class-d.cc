#include "class-d.h"

unsigned int ClassD::counter_ = 0;

ClassD::ClassD() {
  std::cout << "Class D initialized, counter is: " << ++counter_ << '\n';
  std::cout << "Class D has Version " << TART_PACKAGE_VERSION << '\n';
}

void ClassD::printCounter() {
  std::cout << "Counter of Class D is: " << ++counter_ << '\n';
  return;
}
