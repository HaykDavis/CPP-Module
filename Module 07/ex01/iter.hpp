#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void iter(T *arr, unsigned int len, void (*func)(T const &el)) {
	for (unsigned int i = 0; i < len; i++)
		(*func)(arr[i]);
	return ;
}


#endif
