#include <iostream>
#include "matrix.hpp"
int main()
{
  size_t m = 0, n = 0;
  std::cin >> m >> n;
  int** table = nullptr;
  try{
    table = matrix(m, n);
  } catch (const std::bad_alloc & e){
    std::cerr << "Out of memot\n";
    return 1;
  }

  for(size_t i = 0; i < m; ++i){
    for (size_t j = 0; j < n; ++j){
      std::cin >> table[i][j];
    }
  }

  for(size_t i = 0; i < m; ++i){
    std::cout << table[i][0];
    for(size_t j = 1; j < n; ++j){
      std::cout << " " << table[i][j];
    }
    std::cout << "\n";
  }
  clear(table, m);
}
