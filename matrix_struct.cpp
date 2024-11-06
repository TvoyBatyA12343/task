#include "matrix_struct.hpp"
#include "matrix.hpp"
#include <iostream>

Matrix::~Matrix()
{
  ::clear(t_, m_);
}

Matrix::Matrix(size_t m, size_t n):
  t_(::alloc(m, n)), m_(m), n_(n)
  {}

void Matrix::print(std::ostream& out)
{
  ::print(out, t_, m_, n_);
}

void Matrix::input(std::istream& in)
{
  ::input(in, t_, m_, n_);
}

void Matrix::getRowNumber()
{
  std::cout << m_ << "\n";
}

void Matrix::getColNumber()
{
  std::cout << n_ << "\n";
}

Matrix::Matrix(const Matrix& other): m_(other.m_), n_(other.n_)
{
  t_ = alloc(m_, n_);
  input(std::cin);
}
