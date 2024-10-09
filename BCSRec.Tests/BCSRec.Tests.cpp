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

		TEST_METHOD(setLength_7_equals7)
		{
			int length = 7;
			const int expected = 7;

			int actual = 2;
			setLength(length, &actual);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(setLength_negative1_ignoresInput)
		{
			int length = -1;
			const int expected = 2;

			int actual = 2;
			setLength(length, &actual);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(setLength_tooBig_ignoresInput)
		{
			int length = 999;
			const int expected = 2;

			int actual = 2;
			setLength(length, &actual);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(setWidth_7_equals7)
		{
			int width = 7;
			const int expected = 7;

			int actual = 0;
			setWidth(width, &actual);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(setWidth_negative1_ignoresInput)
		{
			int width = -1;
			const int expected = 2;

			int actual = 2;
			setWidth(width, &actual);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(setWidth_tooBig_ignoresInput)
		{
			int width = 999;
			const int expected = 2;

			int actual = 2;
			setWidth(width, &actual);

			Assert::AreEqual(expected, actual);
		}
	};
}
