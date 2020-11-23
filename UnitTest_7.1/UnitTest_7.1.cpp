#include "pch.h"
#include "CppUnitTest.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest71
{
	TEST_CLASS(UnitTest71)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Low = 11;
			int High = 74;
			int rowCount = 8;
			int colCount = 9;
			int** c = new int* [rowCount];
			for (int i = 0; i < rowCount; i++)
				c[i] = new int[colCount];
			int S = 0;
			int k = 0;
			for (int i = 0; i < rowCount; i++)
				delete[] c[i];
			delete[] c;

		}
	};
}
