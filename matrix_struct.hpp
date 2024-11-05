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

  Matrix(const Matrix& mtx2) : m_(mtx2.m_), n_(mtx2.n_);
  {
    t_ = ::alloc(m_, n_);
  }

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

#endif
