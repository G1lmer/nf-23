#pragma once

#include "Operation.h"

class Plus : public Operation
{
public:
	double eval(double a, double b);
};