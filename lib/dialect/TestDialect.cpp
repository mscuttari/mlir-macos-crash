#include "TestDialect.h"
#include "Ops.h"
#include "mlir/IR/DialectImplementation.h"

using namespace ::mlir;
using namespace ::mlir::test;

#include "TestDialect.cpp.inc"

void TestDialect::initialize()
{
    addOperations<
        #define GET_OP_LIST
        #include "Test.cpp.inc"
    >();
}
