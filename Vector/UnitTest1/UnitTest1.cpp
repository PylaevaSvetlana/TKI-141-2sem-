#include "pch.h"
#include "CppUnitTest.h"
#include "..\Domain\Point.h"
#include "cmath"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(PointTest)
	{
	public:

		TEST_METHOD(OperatorEqual_EqualData_True)
		{
			Point::Point a(0, 0, 0), b(0, 0, 0);

			Assert::IsTrue(a == b);
		}
		TEST_METHOD(OperatorEqual_NotEqualData_False)
		{
			Point::Point a(0, 0, 0), b(1, 3, 5);

			Assert::IsFalse(a == b);
		}
		TEST_METHOD(OperatorNotEqual_NotEqualData_True)
		{
			Point::Point a(0, 0, 0), b(23, 40, -21);

			Assert::IsTrue(a != b);
		}
		TEST_METHOD(OperatorNotEqual_EqualData_False)
		{
			Point::Point a(0, 0, 0), b(0, 0, 0);

			Assert::IsFalse(a != b);
		}
	};
}

