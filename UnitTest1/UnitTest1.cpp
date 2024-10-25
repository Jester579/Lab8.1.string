#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1.string/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(Test)
		{
			string s = "abc,-abc,-!";
			int result = Count(s);
			Assert::AreEqual(2, result);
		}
	};
}
