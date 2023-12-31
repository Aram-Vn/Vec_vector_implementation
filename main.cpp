#include <iostream>
#include "Vec_declaration.h"

int main(){

	const Vec<int> v = {1, 2, 3, 4, 5, 6};
	std::cout << v << std::endl;

	Vec<int>::const_itr itr = v.c_begin();

	++itr;

	std::cout << *(itr + 2) << " " << itr[1] << std::endl;

    for(Vec<int>::const_itr it = v.c_begin(); it != v.c_end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

 
}

