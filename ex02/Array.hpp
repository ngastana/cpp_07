#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <iostream>

template<typename T>

class Array
{
    private:
        T   *_array;
        unsigned int _size;
    public:
        Array(): _array(NULL), _size(0){
            std::cout << "Default Constructor called: created empty Array of size 0" << std::endl;
        }
        Array(unsigned int size): _size(size){
            std::cout << "Constructor for an Array of size " << size << " called" << std::endl;
            this->_array= (_size > 0)? new T[this->_size] : NULL;
        }
        Array(const Array &copy): _size(copy._size){
            std::cout << "Copy Constructor called" << std::endl;
            _array = (_size > 0) ? new T[_size] : NULL;
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = copy._array[i];
        }
        Array &operator=(const Array &other){
            std::cout << "operator= called" << std::endl;
            if (this == &other)
                return (*this);
            delete [] _array;
            _size = other.size();
            _array = (_size > 0) ? new T[_size] : NULL;
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
            return (*this);
        }
        ~Array() {
            std::cout << "Destructor called" << std::endl;
            delete[] _array;
        }

        unsigned int size() const{
            return (this->_size);
        }

        T &operator[](unsigned int index){
            if (index >= this->_size || !_array)
                throw InvalidIndexException();
            return (this->_array[index]);
        }
        class InvalidIndexException : public std::exception{
            public:
                virtual const char *what() const throw() {
                    return "Index out of bounds";
                }
        };
};

#endif
