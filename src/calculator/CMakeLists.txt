add_executable(calculator_main main.cpp Calculator.cpp SymbolOperationMapper.cpp Minus.cpp Plus.cpp include/Operation.h include/Calculator.h include/Plus.h include/Minus.h include/OperationMapper.h include/SymbolOperationMapper.h)

add_library(calculator Calculator.cpp SymbolOperationMapper.cpp Minus.cpp Plus.cpp)

target_include_directories(calculator PUBLIC include)

