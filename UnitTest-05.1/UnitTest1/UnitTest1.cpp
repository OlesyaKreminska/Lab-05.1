#include "pch.h"
#include "CppUnitTest.h"
#include "../../Lab-05.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 3;
			double b = 4;
			double test_var = (a + b + pow(a, 2) * pow(b, 2)) / (pow(a, 2) + pow(b, 2));
			Assert::AreEqual(test_var, h(a, b));
		}
	};
}
