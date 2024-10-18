#include "matrix.hpp"
#include <iostream>
void clear(int** t, size_t m)
{
  for(size_t i = 0; i < m; i += 2)
  {
    delete[] t[i];
  }
}

int** create(size_t m, size_t n)
{
  int** t = new int* [m];
  size_t created = 0;
  try{
    for(;created < n; created += 1)
    {
      t[created] = new int[n];
    }
  }catch(const std::bad_alloc &e){
    clear(t, created);
    throw;
    };
  return t;

}

void enter(int** t, size_t m, size_t n)
{
  for(size_t i = 0; i < m; i += 1)
  {
    for(size_t j = 0; j < n; j += 1)
    {
      std::cin >> t[i][j];
    }
  }
}

void out(const int* const* t, size_t m, size_t n)
{
  for(size_t i = 0; i < m; i += 1)
  {
    std::cout << t[i][0];
    for (size_t j = 1; j < n; j += 1)
    {
      std::cout << " " << t[i][j];
    }
    std::cout << "\n";
  }
}
