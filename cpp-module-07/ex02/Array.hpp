

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array
{
private:
    T *array;
      int _size;

public:
    Array() : _size(0)
    {
        this->array = NULL;
        std::cout << "array empty\n";
    };
    Array(unsigned int n)
    {
        if(n < 0 )
            throw Error();
        this->_size = n;
        this->array = new T[n];
        std::cout << "array called\n";
    };
    Array(Array  &copy) : _size(copy._size)
    {
        *this = copy;
        std::cout << "array copy called\n";
    };
    ~Array()
    {
        if(this->_size > 0)
            delete[] this->array;
        std::cout << "deconstructor called\n";
    };
    Array  &operator=(Array<T>  &op)
    {
        std::cout << "Assignation operator called" << std::endl;
        
        
            this->_size = op.size();
            this->array = new T[this->_size];
            for (int i = 0; i < this->_size; i++)
                this->array[i] = op.array[i];
        
        return (*this);
    }

    T &operator[](int index)
    {
        if(index < 0 || index > this->_size )
            throw Error();
        return(this->array[index]);
    }

     int   size(void) 
    {
        return(this->_size);
    }

    class Error: public std::exception{
        public:
          virtual const char *what() const throw();
    };

};

template<typename T>
   const char * Array<T>::Error::what() const throw()
{
   return("error index");
}

#endif