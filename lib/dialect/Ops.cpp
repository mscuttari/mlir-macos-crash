#include "TestDialect.h"
#include "Ops.h"
#include "mlir/IR/Builders.h"
#include "mlir/IR/BuiltinOps.h"
#include "mlir/IR/OpImplementation.h"

using namespace ::mlir::test;

#define GET_OP_CLASSES
#include "Test.cpp.inc"
