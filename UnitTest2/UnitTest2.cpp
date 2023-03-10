#include "pch.h"
#include "CppUnitTest.h"
#include "../BCSRec/main.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestWidth1)
		{
			int input = 30;
			int width = setWidth(int input, int* width);
			Assert::AreEqual(30, width);
		}

		TEST_METHOD(TesWidth2)
		{
			int input = 69;
			int width = setWidth(int input, int* width);
			Assert::AreEqual(30, width);
		}

		TEST_METHOD(TestWidth3)
		{
			int input = 1;
			int width = setWidth(int input, int* width);
			Assert::AreEqual(30, width);
		}


	};
}
