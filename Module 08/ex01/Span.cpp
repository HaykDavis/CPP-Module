#include "Span.hpp"

Span::Span() { }

Span::Span(unsigned int const &n) : N(n){ 
	arr.reserve(N);
}

Span::Span(const Span& other){
    *this = other;  
}

Span &Span::operator=(Span const &other){
	for (unsigned int i = 0; i < this->N; i++)
		this->arr[i] = other.arr[i];
	return (*this);
}

unsigned int Span::longestSpan(void) const{
	if (this->arr.size() < 2)
		throw FewArgException();
	int min = *min_element(this->arr.begin(), this->arr.end());
	int max = *max_element(this->arr.begin(), this->arr.end());
	return (max - min);
}

unsigned int Span::shortestSpan(void) const{
	std::vector<int> tmp = arr;
	if (this->arr.size() < 2)
		throw FewArgException();
	std::sort(tmp.begin(), tmp.end());
	int min = std::abs(tmp[1] - tmp[0]);
	for (unsigned long i = 0; i < tmp.size(); i++){
		for (unsigned long j = 0; j < tmp.size(); j++){
			if (i != j && min > abs(tmp[i] - tmp[j]))
				min = abs(tmp[i] - tmp[j]);
		}
	}
	return (min);
}

void Span::addNumber(int const num){
	if (this->arr.size() + 1 > this->N)
		throw NoSpaceLeftException();
	this->arr.push_back(num);
}

Span::~Span(){ }