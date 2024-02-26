#pragma once

#include <iostream>
#include "OperationMapper.h"

class Calculator
{
	OperationMapper* operationMapper;
public:
	Calculator(OperationMapper* mapper);
	double calculate(double a, double b, std::string operation);
};
