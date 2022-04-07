#pragma once
# include <iterator>
# include <iostream>
# include <vector>
# include <stack>
# include <algorithm>

template<class T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack();
		MutantStack(MutantStack const &instace);
		MutantStack<T> &operator=(MutantStack const &instace);

		typedef typename std::stack<T>::container_type::iterator it;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_it;
		it begin(void);
		it end(void);
		reverse_it rbegin(void);
		reverse_it rend(void);
		virtual ~MutantStack();
};

template<class T>
MutantStack<T>::MutantStack() : std::stack<T>(){}

template<class T>
MutantStack<T>::MutantStack(MutantStack const &instace){ 
	*this = instace;
}

template<class T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &instace){
	static_cast<void>(instace);
	return(*this);
}

template<class T>
typename MutantStack<T>::it MutantStack<T>::begin(){
	return(this->c.begin());
}

template<class T>
typename MutantStack<T>::it MutantStack<T>::end(){
	return(this->c.end());
}

template<class T>
typename MutantStack<T>::reverse_it MutantStack<T>::rbegin(){
	return(this->c.rbegin());
}

template<class T>
typename MutantStack<T>::reverse_it MutantStack<T>::rend(){
	return(this->c.rend());
}

template<class T>
MutantStack<T>::~MutantStack(){}
