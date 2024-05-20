#include <iostream>
#include "..\Domain\Point.h"
#include "..\Domain\Vector.h"

int main()
{
	Point::Point A(1, 1, 1), B(2, 4, 1);
	std::cout << A << std::endl << B << std::endl;
	Vector::Vector AB(A, B);
	std::cout << AB << std::endl;
	Vector::Vector BA(B, A);
	std::cout << BA << std::endl;
	std::cout << AB + BA << std::endl << AB - BA << std::endl << AB * 3;
	return 0;
}
