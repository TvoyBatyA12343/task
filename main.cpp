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
    table = alloc(m, n);
    if(!std::cin){
      std::cerr << "Input Error!\n";
    }
  } catch (const std::bad_alloc & e){
    std::cerr << "Out of memory\n";
    return 1;
  }
  input(std::cin, table, m, n);
  print(std::cout, table, m, n);
  clear(table, m);
}

struct Matrix
{
  ~Matrix()
  {
    ::clear(t_, m_);
  }

  Matrix(size_t m, size_t n):
    t_(::alloc(m, n)), m_(m), n_(n)
  {}

  void print(std::ostream& out)
  {
    ::print(out, t_, m_, n_);
  }

  void input(std::istream& in)
  {
    ::input(in, t_, m_, n_);
  }


  int** t_;
  size_t m_, n_;
};
