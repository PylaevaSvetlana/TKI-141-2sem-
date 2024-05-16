#pragma once
#include "Point.h"
namespace Vector
{
	class Vector
	{
	public:
		Vector(const Point::Point& start, const Point::Point& end);
		friend std::ostream& operator<<(std::ostream& output, const Vector& vector);
		bool operator == (const Vector& vector)const;
		bool operator != (const Vector& vector)const;
		Vector operator + (const Vector& vector)const;
		Vector operator - (const Vector& vector)const;

    private:
		Point::Point start;
		Point::Point end;
		

	};
}


