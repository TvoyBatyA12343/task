#include <iostream>
#include "matrix.hpp"
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
  void getRowNumber()
  {
    std::cout << m_ << "\n";
  }
  void getColNumber()
  {
    std::cout << n_ << "\n";
  }

  int** t_;
  size_t m_, n_;
};

int main()
{
  size_t m = 0, n = 0;
  std::cin >> m >> n;
  if(!std::cin){
    std::cerr << "Input Error!\n";
    return 1;
  }
  Matrix mtx(m, n);
  mtx.input(std::cin);
  if (!std::cin)
  {
    return 1;
  }
  mtx.print(std::cout);
  mtx.getRowNumber();
  mtx.getColNumber();

}

