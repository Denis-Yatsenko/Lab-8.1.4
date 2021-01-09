#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Lab_8.1.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest814
{
	TEST_CLASS(UnitTest814)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str = "abcvabc";
			int k = Count(str);
			Assert::AreEqual(k, 2);
		}
	};
}
