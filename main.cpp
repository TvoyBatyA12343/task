#include <iostream>
#include "matrix_struct.cpp"


// Василий Александрович, как по-нормальному разделять класс на файлы?
// В этом проекте у меня есть hpp для класса матрицы, но если его подключаю
// в main, то он пишет ко всем вызовам методов undefined reference.

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
  size_t k = 3; size_t l = 3;
  mtx.getRowNumber();
  Matrix mtx2 {mtx};
}

