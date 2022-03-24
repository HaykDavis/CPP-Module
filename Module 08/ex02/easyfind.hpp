#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iterator>
# include <iostream>
# include <vector>
# include <list>
# include <set>

class IterException : public std::exception {
	virtual const char *what() const throw(){
		return ("Iter was not found!");
	}
};

template <typename T>
typename T::iterator easyfind(T &arr, int const i) {
	typename T::iterator it = std::find(arr.begin(), arr.end(), i);
	if (it == arr.end())
		throw IterException();
	return (it);
}


#endif
