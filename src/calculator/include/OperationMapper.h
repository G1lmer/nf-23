#pragma once

#include <iostream>
#include "Operation.h"

class OperationMapper
{
public:
	virtual Operation* getOperation(std::string operation) = 0;
};
