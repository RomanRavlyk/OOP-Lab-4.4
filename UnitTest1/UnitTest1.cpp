#include "pch.h"
#include "CppUnitTest.h"
#include "..//OOP Lab 4.4/Pair.h"
#include "..//OOP Lab 4.4/Money.h"
#include "..//OOP Lab 4.4/Money.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money m1(2, 34);
			long x = 2;
			Assert::AreEqual(x, m1.getHryvnya());
		}
	};
}
