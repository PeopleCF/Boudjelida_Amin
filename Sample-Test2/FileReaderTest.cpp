#include "pch.h"
#include "C:/out/FileReader.cpp"

#include <iostream>
class FileReadTest : public ::testing::Test
{
protected:
	void SetUp()
	{
		FR = new FileReader();
	}
	void TearDown()
	{
		delete FR;
	}
	FileReader *FR;
};
TEST_F(FileReadTest, readFile_FileUnavailable_CannotReadFile) {

	EXPECT_EQ("Cannot Read file", FR->readFile("C:/Users/Амин/source/repos/ConsoleApplication2/Sample-Test1/NotExisting.txt"));

}
TEST_F(FileReadTest, readFile_UsualCase_Path) {
	std::ifstream file;
	std::string s;
	file.open("C:/Users/Амин/source/repos/ConsoleApplication2/Sample-Test1/FileReadExample.txt");
	getline(file, s);
	file.close();
	
	
	
	EXPECT_EQ(s, FR->readFile("C:/Users/Амин/source/repos/ConsoleApplication2/Sample-Test1/FileReadExample.txt"));
}

