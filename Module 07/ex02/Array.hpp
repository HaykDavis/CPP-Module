#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <string>
# include <iostream>

template <typename T>
class Array {
	private:
		T *_array;
		unsigned int _i;
	public:
	Array() : _array(nullptr), _i(0){}
	Array(unsigned int const &_i) : _i(_i){
		_array = new T[_i];
	};
	Array(const Array<T> &other) : _array(new T[other._i]), _i(other._i){
		*this = other;
	}

	unsigned int size() const {return (this->_i);}

	Array<T> &operator=(Array<T> const &other){
		for (unsigned int i = 0; i < other.size(); i++){
			if (this->_i <= i)
				throw OutTheExcept();
			this->_array[i] = other._array[i];
		}
		return (*this);
	}
	T &operator[](unsigned int i){
		if (i < 0 || i > this->_i)
			throw OutTheExcept();
		return (this->_array[i]);
	}
	

	~Array(){
		if (this->_array)
			delete [] this->_array;
	}
	class OutTheExcept : public std::exception{
		public:
			virtual const char *what() const throw() {
				return("Exception does");
			}
	};
};


#endif
