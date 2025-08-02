#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T> //escribir una función (o clase) que funcione con cualquier tipo, y voy a usar T como nombre genérico a ese tipo.
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(const T& a, const T& b) 
{
    return (a < b) ? a : b;
}

template <typename T>
T max(const T& a, const T& b) 
{
    return (a > b) ? a : b;
}

#endif
