#include "include/Calculator.h"
#include "include/OperationMapper.h"	

Calculator::Calculator(OperationMapper *mapper)
{
	operationMapper = mapper;
}

double Calculator::calculate(double a, double b, std::string operation)
{
	return operationMapper->getOperation(operation)->eval(a, b);
}