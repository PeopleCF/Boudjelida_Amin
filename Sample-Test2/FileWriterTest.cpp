#include "pch.h"
#include "C:/out/FileWriter.cpp"
#include <iostream>
class FileWriterTest : public ::testing::Test
{
protected:
	void SetUp()
	{
		FW = new FileWriter();
	}
	void TearDown()
	{
		delete FW;
	}
	FileWriter *FW;
};
TEST_F(FileWriterTest, writeFile_FileUnavailable_ReturnMinusOne) {

	EXPECT_EQ(-1, FW->writeFile("ExampleString","C:/Users/Амин/source/repos/ConsoleApplication2/Sample-Test1/NotExisting.txt"));

}
TEST_F(FileWriterTest, writeFile_UsualCase_StringInFileIsOk) {
	std::ifstream file;
	FW->writeFile("ExampleString", "C:/Users/Амин/source/repos/ConsoleApplication2/Sample-Test1/FileExample.txt");
	file.open("C:/Users/Амин/source/repos/ConsoleApplication2/Sample-Test1/FileExample.txt");
	std::string s;
	getline(file, s);
	file.close();
	EXPECT_EQ(s,"ExampleString" );
}

