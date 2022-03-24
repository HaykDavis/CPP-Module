#include "Span.hpp"

int main() {
	Span sp = Span(10000);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::list<int> i;
	for (unsigned int l = 0; l < 1000; l++)
		i.push_back(l + 10);
	sp.addNumber(i.begin(), i.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0; 
}