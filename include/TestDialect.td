#ifndef TESTDIALECT_TD
#define TESTDIALECT_TD

include "mlir/IR/OpBase.td"

def Test_Dialect : Dialect {
    let name = "test";
    let summary = "Test dialect.";

    let description = [{
        Test Dialect
    }];

    let cppNamespace = "::mlir::test";
    let emitAccessorPrefix = kEmitAccessorPrefix_Prefixed;
}

#endif
