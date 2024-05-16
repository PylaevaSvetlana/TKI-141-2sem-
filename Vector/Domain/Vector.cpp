#include "Vector.h"
#include "cmath"

Vector::Vector::Vector(const Point::Point& start, const Point::Point& end)
{
	this->start = start;
	this->end = end;
}

bool Vector::Vector::operator==(const Vector& vector) const
{
	return(this->start==vector.start && this->end == vector.end);
}

bool Vector::Vector::operator!=(const Vector& vector) const
{
	return !(*this == vector);
}

Vector::Vector Vector::Vector::operator+(const Vector& vector) const
{
	return Vector();
}

Vector::Vector Vector::Vector::operator-(const Vector& vector) const
{
	return Vector();
}

std::ostream& Vector::operator<<(std::ostream& output, const Vector& vector)
{
	output << vector.start << vector.end;
	return output;
}
