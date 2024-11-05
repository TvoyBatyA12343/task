#ifndef MATRIX_STRUCT_HPP
#define MATRIX_STRUCT_HPP
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

  void changeSize(size_t k, size_t l)
  {
    ::clear(t_, m_);
    t_ = ::alloc(k, l);

  }

  int** t_;
  size_t m_, n_;
};

#endif
