#include <iostream>
#include "matrix.hpp"
int main()
{
  size_t m = 0;
  size_t n = 0;
  int ** t = matrix(m, n);
  std::cin >> m >> n;
  std::cout << m << " " << n;
  std::cout << '\n';
  clear(t, m);
}
