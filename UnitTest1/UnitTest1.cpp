#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.2/FileName.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const vector<int>& vec = {1,4,3,6,5};
			FLargestE(vec);
			Assert::AreEqual(3, 3);
		}
	};
}
