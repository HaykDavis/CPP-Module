#ifndef SPAN_HPP
# define SPAN_HPP
# include <iterator>
# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

class Span {
	private:
		unsigned int N;
		std::vector<int> arr;
	public:
		Span();
		Span(unsigned int const &n);
		Span(Span const &instace);
		Span &operator=(Span const &instace);
		~Span();

		unsigned int shortestSpan(void) const;
		unsigned int longestSpan(void) const;
		void addNumber(int const num);

		template <typename T>
		void addNumber(T iterOne, T iterTwo){
			if (this->arr.size() + 1 > this->N)
				throw NoSpaceLeftException();
			while (iterOne != iterTwo){
				this->arr.push_back(*iterOne);
				iterOne++;
			}
			this->arr.push_back(*iterTwo);
		}


		class FewArgException : public std::exception {
			virtual const char *what() const throw(){
				return ("Few args!");
		}
	};

	class NoSpaceLeftException : public std::exception {
		virtual const char *what() const throw(){
			return ("No space left!");
		}
	};
};


#endif
