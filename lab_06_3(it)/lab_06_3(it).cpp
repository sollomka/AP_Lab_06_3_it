#include "pch.h"
#include "CppUnitTest.h"
#include "../AP_Lab_06_3(it)/Lab_06_3(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab063it
{
	void Test(int* a, int* c, const int size)
	{
		for (int i = 0; i < size - 1; i++)
		{
			int min = c[i];
			int imin = i;
			for (int j = i + 1; j < size; j++)
				if (min > c[j])
				{
					min = c[j];
					imin = j;
				}
			c[imin] = c[i];
			c[i] = min;
		}
		for (int i = 0; i < size; i++)
			Assert::AreEqual(a, c);
	}
	TEST_CLASS(lab063it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
		
				const int n = 10;
				int c[n];
				int Low = -10, High = 10;
				Create(c, n, Low, High);
				int* a = Sort(c, n);
				Test(a, c, n);
		}
	};
}
