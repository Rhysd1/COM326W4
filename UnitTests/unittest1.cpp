#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestStudentClass
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestStudentCustomConstructor)
		{
			// Test Student class custom constructor

			// Arrange

			// Act
			
			// Assert
			
		}
	};
}

namespace TestModuleClass
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestModuleCustomConstructor)
		{
			// Test module class custom constructor

			// Arrange
			Module m{ "acting101", "ACT101", 20, 45 };
			std::string expected1{ "acting101" };
			std::string expected2{ "ACT101" };
			int expected3{ 20 };
			int expected4{ 45 };

			std::string actual1{}, actual2{};
			int actual3{}, actual4{};

			// Act
			actual1 = m.getModuleTitle();
			actual2 = m.getModuleCode();
			actual3 = m.getModuleCreditPoints();
			actual4 = m.getModuleMark();

			// Assert
			Assert::AreEqual(expected1, actual1);
			Assert::AreEqual(expected2, actual2);
			Assert::AreEqual(expected3, actual3);
			Assert::AreEqual(expected4, actual4);
		}

		TEST_METHOD(TestGetModuleCode)
		{
			// Test module class get module code

			// Arrange
			Module m{ "acting101", "ACT101", 20, 45 };			
			std::string expected{ "ACT101" };
			std::string actual{};

			// Act
			actual = m.getModuleCode();

			// Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetModuleCode)
		{
			// Test module class set module code

			// Arrange
			Module m{};
			std::string expected{ "ACT101" };
			std::string actual{};

			// Act
			m.setModuleCode("ACT101");
			actual = m.getModuleCode();

			// Assert
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestGetCreditPoints)
		{
			// Test module class get credit points

			// Arrange
			Module m{ "acting101", "ACT101", 20, 45 };
			std::string expected{ 20 };
			std::string actual{};

			// Act
			actual = m.getModuleCreditPoints();

			// Assert
			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(TestSetCreditPoints)
		{
			// Test module class set credit points

			// Arrange
			Module m{};
			std::string expected{ 20 };
			std::string actual{};

			// Act
			m.setModuleCreditPoints(20);
			actual = m.getModuleCreditPoints();

			// Assert
			Assert::AreEqual(expected, actual);

		}
	};
}