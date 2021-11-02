#include "pch.h"
#include "CppUnitTest.h"
#include "../iterator.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Microsoft {
	namespace VisualStudio {
		namespace CppUnitTestFramework {
			template<>static std::wstring ToString(const vector<int>& object)
			{
				return wstring();
			}
		}
	}
}
namespace iteeratorTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int m = 2, n = 3;
			//vector<vector<int>>v = { {1,2,3},{4,5,6} };
			vector<vector<int>>twod(m, vector<int>(n));
			twod = { {1,2,3},{4,5,6} };
			
			vector<vector<int>>::iterator row;
			vector<int>::iterator col;

			vector<int>oned(m * n);
			vector<int>::iterator it;
			it = oned.begin();
			vector<int>v_expected = { 1,2,3,4,5,6 };
			

			d2tod1(twod, row, col, n, it);
			for (int i = 0; i < (m * n); i++) {
				//cout << *(it + 1) << " " << v_expected[i] << endl;
				Assert::AreEqual(*(it+i), v_expected[i]);
			}
		
		}
	};
}
