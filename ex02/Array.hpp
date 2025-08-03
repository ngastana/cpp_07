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
        Array(): _size(0){
            std::cout << "Default Constructor called: created empty Array of size 0" << std::endl;
            this->_array = new T[this->_size];
        }
        Array(unsigned int size): _size(size){
            std::cout << "Constructor for an Array of size" << size << "called" << std::endl;
            this->_array= (_size > 0)? new T[this->_size] : NULL;
        }
        Array(const Array &copy): _size(copy.size()){
            std::cout << "Copy Constructor called" << std::endl;
            this->_array = NULL;
            this->_array = copy._array;
        }
        Array &operator=(const Array &other){
            if (this == &other)
                return (*this);
            delete [] this->_array;
            this->_size = other.size();
            _array = (_size > 0) ? this->_array = new T[other.size()] : NULL;
            for (unsigned int i = 0; i < this->_size; i++)
                this->_array[i] = other._array[i];
            return (*this);
        }
        ~Array() {
            delete[] _array;
        }

        unsigned int size() const{ // mustn't modify the current instance
            return (this->_size);
        }

        T &operator[](unsigned int index){
            if (index >= this->_size || !_array)
            {
                std::cout << "index: " << index << std::endl;
                throw InvalidIndexException();
            }
            return (this->_array[index]);
        }
        class InvalidIndexException : public std::exception{
            public:
                virtual const char *what() const throw();
        };
        void InvalidIndexException::what() const
        {
            std::cerr << "size muy small chacho" << std::endl;
        }
};

#endif
