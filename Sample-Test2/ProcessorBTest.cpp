#include "pch.h"
#include "C:/out/ProcessorB.cpp"
class ProcessorBTest : public ::testing::Test
{
protected:
	void SetUp()
	{
		B = new ProcessorB();
	}
	void TearDown()
	{
		delete B;
	}
	ProcessorB *B;
};
TEST_F(ProcessorBTest, Process_GetNothing_ReturnNothing) {

	std::string s = "";
	EXPECT_EQ("", B->Process(s));

}
TEST_F(ProcessorBTest, Process_AUsualTest_ReturnCommasReplacedWithDots) {
	std::string s = "First,Second,Third";
	EXPECT_EQ("First.Second.Third", B->Process(s));
}

