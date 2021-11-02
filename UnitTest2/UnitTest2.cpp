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
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			int m = 2, n = 3;
			vector<vector<int>>twod(m, vector<int>(n));

			vector<vector<int>>::iterator row;
			vector<int>::iterator col;

			vector<int>oned(m * n);
			oned = { 1,2,3,4,5,6 };
			vector<int>::iterator it;
			it = oned.begin();

			vector<vector<int>>twod_expected = { {1,2,3},{4,5,6 } };


			d1tod2(twod, row, col, it, m, n);
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < n; j++) {
					Assert::AreEqual(twod_expected[i][j], twod[i][j]);
				}
			}

		}
	};
}
