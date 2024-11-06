#ifndef MATRIX_STRUCT_HPP
#define MATRIX_STRUCT_HPP
#include "matrix.hpp"

struct Matrix
{
  ~Matrix()
  {
  }

  Matrix(size_t m, size_t n):
    t_(::alloc(m, n)), m_(m), n_(n)
  {}

  Matrix(const Matrix& mtx2) : m_(mtx2.m_), n_(mtx2.n_);
  {
  }

  void print(std::ostream& out)
  {
  }

  void input(std::istream& in)
  {
  }

  void getRowNumber()
  {
  }

  void getColNumber()
  {
  }


  int** t_;
  size_t m_, n_;
};

#endif
