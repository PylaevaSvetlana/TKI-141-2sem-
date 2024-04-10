#pragma once
#include <iostream>

namespace Point
{
	class Point
	{
	private:
		/**
		*@breaf �������� �����.
		*/
		double x = 0;
		/**
		*@breaf �������� �����.
		*/
		double y = 0;
		/**
		*@breaf ��������� �����.
		*/
		double z = 0;

	public:
		/**
		*@breaf ������ �������� ������ Point.
		*@param �������� �����.
		*@param �������� �����.
		*@param ��������� �����.
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

