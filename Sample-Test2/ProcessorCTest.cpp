#include "pch.h"
#include "C:/out/ProcessorC.cpp"
class ProcessorCTest : public ::testing::Test
{
protected:
	void SetUp()
	{
		C = new ProcessorC();
	}
	void TearDown()
	{
		delete C;
	}
	ProcessorC *C;
};
TEST_F(ProcessorCTest, Process_GetNothing_ReturnNothing) {

	std::string s = "";
	EXPECT_EQ("", C->Process(s));

}
TEST_F(ProcessorCTest, Process_AUsualTest_ReturnCommasReplacedWithDots) {
	std::string s = "F  i   r  s  t   S   ec  o  nd      Th  i  r  d";
	EXPECT_EQ("FirstSecondThird", C->Process(s));
}

