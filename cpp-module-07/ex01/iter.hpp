


#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
 
template<typename T>
void iter(T *array, int lenght, void f(T &))
{
  for(int i = 0; i < lenght;i++) 
    f(array[i]);
}

template<typename T>
void f(T &array)
{
  std::cout << array << std::endl ;
}

#endif