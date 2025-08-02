#ifndef ITER_HPP
# define ITER_HPP

template<typename T>

void    iter(T *arr, const int length, void fun(T &el)){
    for (int i = 0; i < length; i++)
        fun(arr[i]);
};

#endif