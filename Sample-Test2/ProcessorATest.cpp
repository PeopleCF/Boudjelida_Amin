#include "pch.h"
#include "C:/out/ProcessorA.cpp"
#include "C:/out/IProcessor.cpp"
class ProcessorATest : public ::testing::Test
{
protected:
	void SetUp()
	{
		A = new ProcessorA();
	}
	void TearDown()
	{
		delete A;
	}
	ProcessorA *A;
};
TEST_F(ProcessorATest, Process_GetOneWordOnly_ReturnTheSameString) {

	std::string s = "OneExampleWord";
	EXPECT_EQ(s, A->Process(s));

}
TEST_F(ProcessorATest, Process_AUsualTest_ReturnInReverseOrder) {
	std::string s = "First Second Third";
	EXPECT_EQ("Third Second First", A->Process(s));
}
TEST_F(ProcessorATest, Process_NoWords_ReturnNothing) {
	std::string s = "";
	EXPECT_EQ("", A->Process(s));
}
TEST_F(ProcessorATest, Process_WordsOfNumbers_ReturnOk) {
	std::string s = "111 222 333";
	EXPECT_EQ("333 222 111", A->Process(s));

}
