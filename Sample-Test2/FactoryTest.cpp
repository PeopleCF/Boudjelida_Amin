#include "pch.h"
#include "C:/out/Factory.cpp"

#include <iostream>
#include <typeinfo>
class FactoryTest : public ::testing::Test
{
protected:
	void SetUp()
	{
		F = new Factory();
	}
	void TearDown()
	{
		delete F;
		delete P;
	}
	Factory *F;
	IProcessor *P;
};
TEST_F(FactoryTest, getProcessor_InputA_GetAProcessor) {
	P = F->getProcessor('A');
	ProcessorA *A = new ProcessorA();
	EXPECT_EQ(P->getType(), A->getType());
	delete A;
}
TEST_F(FactoryTest, getProcessor_InputB_GetBProcessor) {

	P = F->getProcessor('B');
	ProcessorB *B = new ProcessorB();
	EXPECT_EQ(P->getType(),B->getType());
	delete B;
}
TEST_F(FactoryTest, getProcessor_InputC_GetCProcessor) {
	P = F->getProcessor('C');
	ProcessorC *C = new ProcessorC();
	EXPECT_EQ(P->getType(), C->getType());
	delete C;
}
TEST_F(FactoryTest, getProcessor_WrongInput_GetNullPtr) {
	P = F->getProcessor('S');
	EXPECT_EQ(P, nullptr);
}

