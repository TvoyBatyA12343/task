#include <iostream>
#include "matrix.hpp"
int main()
{
  size_t m = 0, n = 0;
  std::cin >> m >> n;
  if(!std::cin){
    std::cerr << "Input Error!\n";
    return 1;
  }
  int** table = nullptr;
  try{
    table = create(m, n);
    if(!std::cin){
      std::cerr << "Input Error!\n";
    }
  } catch (const std::bad_alloc & e){
    std::cerr << "Out of memory\n";
    return 1;
  }
  enter(table, m, n);
  out(table, m, n);
  clear(table, m);
}
