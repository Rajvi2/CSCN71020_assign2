#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*, int*);
extern "C" int getArea(int*, int*);
extern "C" int setLength(int, int*);
extern "C" int setWidth(int, int*);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestPerimeter)
		{
			int width = 10;
			int length = 50;
			int result = getPerimeter( &length, &width);
			Assert::AreEqual(120, result);
		}
		TEST_METHOD(TestArea)
		{
			int width = 30;
			int length = 20;
			int result = getArea(&length,&width);
			Assert::AreEqual(600, result);
		}
		TEST_METHOD(TestWidth1)
		{
			int input = 30;
			int width = 60;
			setWidth(input, &width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(TestWidth2)
		{
			int input =91;
			int width = 69;
			setWidth(input,&width);
			Assert::AreEqual(input, width);
		}

		TEST_METHOD(TestWidth3)
		{
			int input = 85;
			int width = 99;
			setWidth(input, &width);
			Assert::AreEqual(input, width);
		}
		TEST_METHOD(TestLength1)
		{
			int input = 3.9;
			int length = 56;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}
		TEST_METHOD(TestLength2)
		{
			int input = 25;
			int length = 97;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}
		TEST_METHOD(TestLength3)
		{
			int input = 43;
			int length = 78.9;
			setLength(input, &length);
			Assert::AreEqual(input, length);
		}
	};
}
