#include <iostream>
#include <string>
#include "whatever.hpp"

int	main(void)
{
	int a = 3;
	int b = 4;
	std::cout << "al principio a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	
	std::string c = "holita1";
	std::string d = "holita2";
	std::cout << "al principio c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	
	return 0;
}
