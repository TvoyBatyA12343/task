#ifndef MATRIX_STRUCT_HPP
#define MATRIX_STRUCT_HPP
#include "matrix.hpp"

struct Matrix
{
  ~Matrix();

  Matrix(size_t m, size_t n);

  void print(std::ostream& out);

  void input(std::istream& in);

  void getRowNumber();

  void getColNumber();

  Matrix(const Matrix& other);

  int** t_;
  size_t m_, n_;
};

#endif
