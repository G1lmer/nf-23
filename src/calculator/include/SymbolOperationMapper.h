#pragma once

#include "OperationMapper.h"
#include <iostream>
#include <map>

class SymbolOperationMapper : public OperationMapper
{

	std::map<std::string, Operation*> operations;

public:
	SymbolOperationMapper();
	Operation* getOperation(std::string operation);
};
