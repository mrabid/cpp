#include <iostream>

namespace std {
  template <typename _CharT, typename _Traits>
  inline basic_ostream<_CharT, _Traits> &
  tab(basic_ostream<_CharT, _Traits> &__os) {
    return __os.put(__os.widen('\t'));
  }
}

int main() {

  std::cout << "hello" << std::endl;
  std::cout << std::tab << "world" << std::endl;
}
