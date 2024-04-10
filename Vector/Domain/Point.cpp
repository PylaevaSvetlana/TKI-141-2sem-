#include "Point.h"

Point::Point::Point(const double abscissa, const double ordinate, const double applicate)
{
}

bool Point::Point::operator==(const Point& point) const
{
	return(this->x == point.x && this->y == point.y && this->z == point.z);
}

bool Point::Point::operator!=(const Point& point) const
{
	return !(*this == point);
}

void Point::Point::operator+(double vesh)
{
	this->x += vesh;
	this->y += vesh;
	this->z += vesh;
}

void Point::Point::operator+(double vesh)
{
	this->x -= vesh;
	this->y -= vesh;
	this->z -= vesh;
}

std::ostream& Point::operator<<(std::ostream& output, const Point& point)
{
	output << point.x  << point.y << point.z ;
	return output;
}

std::istream& Point::operator>>(std::istream& input, Point& point)
{
	input >> point.x >> point.y >> point.z;
	return input;
}
