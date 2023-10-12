#include <iostream>
int main()
{
	int a , b , c ;
	
	std::cout << " So thu nhat la : " ;
	std::cin >> a ;
	
	std::cout << " So thu hai la : " ;
	std::cin >> b ;
	
	std::cout << " So thu ba la : " ;
	std::cin >> c ;
	
	if ( a > b )
	{
		if ( b > c )
	{
	
	
			std::cout << a << " la so lon nhat " ;
		}
	}
	else if ( c > b )
	{
		if ( b > a){
		
		std::cout << c << " la so lon nhat " ;
}
	}
	else 
	{
		std::cout << b << " la so lon nhat " ;
	}
	
	return 0 ;
}
