#pragma once
#include <iostream>

namespace Point
{
	class Point
	{
	private:
		/**
		*@breaf Абсцисса точки.
		*/
		double x = 0;
		/**
		*@breaf Ордината точки.
		*/
		double y = 0;
		/**
		*@breaf Аппликата точки.
		*/
		double z = 0;

	public:
		/**
		*@breaf Создаёт экземляр класса Point.
		*@param Абсцисса точки.
		*@param Ордината точки.
		*@param Аппликата точки.
		*/
		Point(const double abscissa, const double ordinate, const double applicate);
		bool operator == (const Point& point)const;
		bool operator != (const Point& point)const;
		void operator + (double vesh);
		void operator - (double vesh);
		friend std::ostream& operator<<(std::ostream& output, const Point& point);
		friend std::istream& operator>>(std::istream& input, Point& point);

	};
}

