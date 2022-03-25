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

unsigned int Span::shortestSpan(void) const{
	if (this->arr.size() < 2)
		throw FewArgException();
	int min = *min_element(this->arr.begin(), this->arr.end());
	int max = *max_element(this->arr.begin(), this->arr.end());
	return (max - min);
}

unsigned int Span::longestSpan(void) const{
	std::vector<int> tmp = arr;
	if (this->arr.size() < 2)
		throw FewArgException();
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator res = std::min_element(tmp.begin(), tmp.end());
	int min = *res;
	res++;
	int next = *res;
	return (next - min);
}

void Span::addNumber(int const num){
	if (this->arr.size() + 1 > this->N)
		throw NoSpaceLeftException();
	this->arr.push_back(num);
}

Span::~Span(){ }