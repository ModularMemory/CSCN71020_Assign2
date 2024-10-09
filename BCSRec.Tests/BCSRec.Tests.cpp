#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "..\BCSRec\main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
	TEST_CLASS(RectangleTests)
	{
	public:
		
		TEST_METHOD(getPerimeter_7and3_equals20)
		{
			int length = 7;
			int width = 3;
			const int expected = 20;

			int actual = getPerimeter(&length, &width);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(getArea_7and3_equals21)
		{
			int length = 7;
			int width = 3;
			const int expected = 21;

			int actual = getArea(&length, &width);

			Assert::AreEqual(expected, actual);
		}
	};
}
