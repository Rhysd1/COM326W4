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
			Student s{ "Darling", "B004645", "Acting", 1 };
			std::string expected1{ "Darling" };
			std::string expected2{ "B004645" };
			std::string expected3{ "Acting" };
			int expected4{ 1 };

			std::string actual1{}, actual2{}, actual3{};
			int actual4{};

			// Act
			actual1 = s.GetName();
			actual2 = s.GetRegistrationID();
			actual3 = s.GetCourse();
			actual4 = s.GetYearofStudy();

			// Assert
			Assert::AreEqual(expected1, actual1);
			Assert::AreEqual(expected2, actual2);
			Assert::AreEqual(expected3, actual3);
			Assert::AreEqual(expected4, actual4);
			
		}

		TEST_METHOD(TestStudentAddModule)
		{
			// Test Student class custom constructor

			// Arrange
			Student st1{ "Rhys McCandless", "B001785178", "Computer Science", 1 };
			Module m{ "OOP", "COM326", 20, 1 };

			std::string expected{ "OOP COM326 20 1" };
			std::string actual{};

			actual = m.getModuleTitle() + " " + m.getModuleCode() + " " + std::to_string(m.getModuleCreditPoints()) + " " + std::to_string(m.getModuleMark());
			
			// Act
			st1.AddModule(m);

			// Assert
			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(TestStudentAddModule2)
		{
			// Test Student class custom constructor

			// Arrange
			Student st1{ "Rhys McCandless", "B001785178", "Computer Science", 1 };
			Module m{ "OOP", "COM326", 20, 1 };

			std::string expected{ "OOP COM326 20 1" };
			std::string actual{};

			actual = m.getModuleTitle() + " " + m.getModuleCode() + " " + std::to_string(m.getModuleCreditPoints()) + " " + std::to_string(m.getModuleMark());

			// Act
			st1.AddModule(m);

			// Assert
			Assert::AreEqual(expected, actual);

		}

		TEST_METHOD(TestClassification) {

			// Test Student class calculate classification

			// Arrange
			Student st1{ "Rhys McCandless", "B001785178", "Computer Science", 1 , 100, 100, 100 };
			std::string expected{ "1st class" };
			std::string actual{};

			// Act
			actual = st1.CalculateClassification();

			// Assert
			Assert::AreEqual(expected, actual);
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