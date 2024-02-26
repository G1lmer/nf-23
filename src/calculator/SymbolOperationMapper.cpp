#include "include/SymbolOperationMapper.h"
#include "include/Operation.h"
#include "include/Plus.h"
#include "include/Minus.h"

SymbolOperationMapper::SymbolOperationMapper()
{
	operations["+"] = new Plus();
	operations["-"] = new Minus();
}

Operation* SymbolOperationMapper::getOperation(std::string operation)
{
	return operations[operation];

}