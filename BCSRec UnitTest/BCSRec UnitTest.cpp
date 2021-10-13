#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int* length, int* width);
extern "C" int setLength(int input, int* length);
extern "C" int setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecUnitTest
{
	TEST_CLASS(BCSRecUnitTest)
	{
	public:
		
		TEST_METHOD(perimeterFunction)
		{
			// this is testing the perimeter function using 5 as the length and 3 as the width to calculate the perimeter.
			// 2*length + 2*width = (perimeter)
			int *length;
			int *width;

			length = new int;
			*length = 5;

			width = new int;
			*width = 3;

			
	
			int Result = getPerimeter(length, width);
			Assert::AreEqual(16, Result);

		}

		TEST_METHOD(areaFunction)
		{
			// this is testing the area function using 5 as the length and 3 as the width to calculate the area.
			// length * width = (area)
			int* length;
			int* width;

			length = new int;
			*length = 5;

			width = new int;
			*width = 3;



			int Result = getArea(length, width);
			Assert::AreEqual(15, Result);

		}

		TEST_METHOD(lengthSet1) {
			//This tests the length set function using an usual input, length will be set to 1 just as default
			int* length;
			int input;
			input = 5;

			length = new int;
			*length = 1;

			setLength(input, length);
			int Result = *length;
			Assert::AreEqual(5, Result);


		}
		TEST_METHOD(lengthSet2) {
			//This tests the length set function using an abnormal input, length will be set to 1 just as default, 
			//the expected outcome is that it will not set length to the input
			int* length;
			int input;
			input = -1221321;

			length = new int;
			*length = 1;

			setLength(input, length);
			int Result = *length;
			Assert::AreEqual(1, Result);

		}
		TEST_METHOD(lengthSet3) {
			//This tests the length set function using an edge case input, length will be set to 1 just as default
			int* length;
			int input;
			input = 99;

			length = new int;
			*length = 1;

			setLength(input, length);
			int Result = *length;
			Assert::AreEqual(99, Result);

		}

		TEST_METHOD(widthSet1) {
			//This tests the width set function using an usual input, width will be set to 1 just as default
			int* width;
			int input;
			input = 5;

			width = new int;
			*width = 1;

			setWidth(input, width);
			int Result = *width;
			Assert::AreEqual(5, Result);

		}
		TEST_METHOD(widthSet2) {
			//This tests the width set function using an abnormal input, width will be set to 1 just as default
			// the expected outcome is that it will not set width to the input
			int* width;
			int input;
			input = -234324;

			width = new int;
			*width = 1;

			setWidth(input, width);
			int Result = *width;
			Assert::AreEqual(1, Result);
		}
		TEST_METHOD(widthSet3) {
			//This tests the width set function using an edge case input, width will be set to 1 just as default
			int* width;
			int input;
			input = 99;

			width = new int;
			*width = 1;

			setWidth(input, width);
			int Result = *width;
			Assert::AreEqual(99, Result);
		}


	};
}
