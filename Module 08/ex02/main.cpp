#include "MutantStack.hpp"
#include <list>
#include <string>

int main(void) {
    {
		MutantStack<int> mstack;
		
		mstack.push(5);
		mstack.push(17);

		std::cout << "top: " << mstack.top() << std::endl;
		mstack.pop();

		std::cout << "size: " <<mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		
		MutantStack<int>::it it = mstack.begin();
		MutantStack<int>::it ite = mstack.end();
		
		++it;
		--it;
		std :: cout << "----ELEMENTS_OF_STACK_WITH_BEGIN()_AND_END()----" << std :: endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		MutantStack<int>::reverse_it rit = mstack.rbegin();
		MutantStack<int>::reverse_it rite = mstack.rend();
		++rit;
		--rit;
		std :: cout << "----ELEMENTS_OF_STACK_WITH_RBEGIN()_AND_REND()----" << std :: endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
		std::stack<int> s(mstack);
	}
	{
		std::list<int> lst;

		lst.push_back(5);
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(0);

		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		std::list<int>::reverse_iterator rit = lst.rbegin();
		std::list<int>::reverse_iterator rite = lst.rend();
		std::cout << "----ELEMENTS_OF_LIST_WITH_BEGIN()_AND_END()----" << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "----ELEMENTS_OF_LIST_WITH_RBEGIN()_AND_REND()----" << std::endl;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
	return 0;
}
