#include <gtest/gtest.h>
#include <Calculator.h>
#include <SymbolOperationMApper.h>

TEST(MultiplyTests, TestOne)
{
	Calculator calculator = Calculator(new SymbolOperationMapper());
	double a = 7.1;
	double b = 3.4;

	double minusResult = calculator.calculate(a, b, "-");

	ASSERT_EQ(a - b, minusResult);
	
}

TEST(MultiplyTests, TestTwo)
{
	Calculator calculator = Calculator(new SymbolOperationMapper());
	double a = 7.1;
	double b = 3.4;

	double plusResult = calculator.calculate(a, b, "+");

	ASSERT_EQ(10.5, plusResult);

}
