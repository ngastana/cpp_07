#ifndef ITER_HPP
# define ITER_HPP

template<typename T, typename F>

void    iter(T *arr, const int length, F fun){
    for (int i = 0; i < length; i++)
        fun(arr[i]);
};

#endif