#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <cstddef>
#include <fstream>

int** alloc(size_t m, size_t n);
void clear(int** t, size_t m);
void input(std::istream& in, int** t, size_t m, size_t n);
void print(std::ostream& out, const int* const* t, size_t m, size_t n);

#endif
