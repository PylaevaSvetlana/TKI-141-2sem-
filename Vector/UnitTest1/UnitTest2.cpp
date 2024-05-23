#include "pch.h"
#include "CppUnitTest.h"
#include "..\Domain\Point.h"
#include "..\Domain\Vector.h"
#include "cmath"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(VectorTest)
	{
		TEST_METHOD(OperatorEqual_EqualData_True)
		{
			Point::Point a(0, 0, 0), b(0, 0, 0);

			Vector::Vector first(a, b), second(a, b);

			Assert::IsTrue(first == second);
		}
		TEST_METHOD(OperatorEqual_NotEqualData_False)
		{
			Point::Point a(0, 0, 0), b(0, 0, 0);
			Point::Point c(4, 3, 5), d(3, 5, 8);

			Vector::Vector first(a, b);
			Vector::Vector second(c, d);

			Assert::IsFalse(first == second);
		}
		TEST_METHOD(OperatorNotEqual_NotEqualData_True)
		{
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Point::Point c(4, 3, 5), d(3, 5, 8);

			Vector::Vector first(a, b);
			Vector::Vector second(c, d);

			Assert::IsTrue(first != second);
		}
		TEST_METHOD(OperatorNotEqual_EqualData_False)
		{
			Point::Point a(0, 0, 0), b(0, 0, 0);

			Vector::Vector first(a, b), second(a, b);

			Assert::IsFalse(first != second);
		}
		TEST_METHOD(OperatorSum_CorrectData_True)
		{
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Point::Point c(4, 3, 5), d(3, 5, 8);
			Point::Point exp_s(0, 0, 0), exp_e(1, 5, -11);

			Vector::Vector first(a, b);
			Vector::Vector second(c, d);
			Vector::Vector expected_vector(exp_s, exp_e);

			Assert::IsTrue(first + second == expected_vector);
		}
		TEST_METHOD(OperatorSum_NotCorrectData_False)
		{
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Point::Point c(4, 3, 5), d(3, 5, 8);
			Point::Point exp_s(0, 0, 0), exp_e(7, 10, 3);

			Vector::Vector first(a, b);
			Vector::Vector second(c, d);
			Vector::Vector expected_vector(exp_s, exp_e);

			Assert::IsFalse(first + second == expected_vector);
		}
		TEST_METHOD(OperatorSubtraction_CorrectData_True)
		{
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Point::Point c(4, 3, 5), d(3, 5, 8);
			Point::Point exp_s(0, 0, 0), exp_e(3, 1, -17);

			Vector::Vector first(a, b);
			Vector::Vector second(c, d);
			Vector::Vector expected_vector(exp_s, exp_e);

			Assert::IsTrue(first - second == expected_vector);
		}
		TEST_METHOD(OperatorSubtraction_NotCorrectData_False)
		{
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Point::Point c(4, 3, 5), d(3, 5, 8);
			Point::Point exp_s(0, 0, 0), exp_e(7, 10, 3);

			Vector::Vector first(a, b);
			Vector::Vector second(c, d);
			Vector::Vector expected_vector(exp_s, exp_e);

			Assert::IsFalse(first - second == expected_vector);
		}
		TEST_METHOD(OperatorMultipliedToScalar_Data_True)
		{
			double v = -1.24;
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Point::Point exp_s(0, 0, 0), exp_e(2 * v, 3 * v, -14 * v);

			Vector::Vector first(a, b);
			Vector::Vector expected_vector(exp_s, exp_e);

			Assert::IsTrue(first * v == expected_vector);
		}
		TEST_METHOD(OperatorMultipliedToScalar_NotCorrectData_False)
		{
			double v = -1.24;
			Point::Point a(0, 0, 0), b(2, 3, -14);
			Point::Point exp_s(0, 0, 0), exp_e(7 * v, 10 * v, 3 * v);

			Vector::Vector first(a, b);
			Vector::Vector expected_vector(exp_s, exp_e);

			Assert::IsFalse(first * v == expected_vector);
		}
	};
}