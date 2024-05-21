#include "pch.h"
#include "CppUnitTest.h"
#include "..\Domain\Point.h"
#include "..\Domain\Vector.h"
#include "cmath"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(PointTest)
	{
	public:
		
		TEST_METHOD(Point_OperatorEqual)
		{
			Point::Point a(0, 0, 0), b(0, 0, 0);
			Assert::IsTrue(a == b);
		}
		TEST_METHOD(Point_OperatorNotEqual)
		{
			Point::Point a(0, 0, 0), b(23, 40, -21);
			Assert::IsTrue(a != b);
		}
	};

	TEST_CLASS(VectorTest)
	{
		TEST_METHOD(Vector_OperatorEqual)
		{
			Point::Point a(0, 0, 0), b(0, 0, 0);
			Vector::Vector first(a, b), second(a, b);
			Assert::IsTrue(first == second);
		}
		TEST_METHOD(Vector_OperatorSum)
		{
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Vector::Vector first(a, b);
			Point::Point c(4, 3, 5), d(3, 5, 8);
			Vector::Vector second(c, d);
			Point::Point exp_s(0, 0, 0), exp_e(1, 5, -11);
			Vector::Vector expected_vector(exp_s, exp_e);
			Assert::IsTrue(first + second == expected_vector);
        }
		TEST_METHOD(Vector_OperatorSubtraction)
		{
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Vector::Vector first(a, b);
			Point::Point c(4, 3, 5), d(3, 5, 8);
			Vector::Vector second(c, d);
			Point::Point exp_s(0, 0, 0), exp_e(3, 1, -17);
			Vector::Vector expected_vector(exp_s, exp_e);
			Assert::IsTrue(first - second == expected_vector);
		}
		TEST_METHOD(Vector_OperatorMultipliedToScalar)
		{
			double v = -1.24;
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Vector::Vector first(a, b);
			Point::Point exp_s(0, 0, 0), exp_e(2*v, 3*v, -14*v);
			Vector::Vector expected_vector(exp_s, exp_e);
			Assert::IsTrue(first * v == expected_vector);
		}
    };
}
