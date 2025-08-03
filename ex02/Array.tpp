template< typename T >

const char* Array<T>::InvalidIndexException::what() const throw()
{
	return ("Error: Invalid index");
}