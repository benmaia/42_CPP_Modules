#include "iter.hpp"

class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print );
iter( tab2, 5, print );
return 0;
}

//template< typename T >
//void tester(T &value)
//{
	//std::cout << "VALUE: " << value << std::endl;
//}

//int	main(void)
//{
	//int			intArray[] = {-5, 33, 140, 3, 4, 5, 22};
	//char a[7] = "abcdef"; 

	//std::cout << "=======================\n";
	//iter(intArray, 6, tester);
	//std::cout << "=======================\n";
	//iter(a, 6, tester);

	//return (0);
//}
