#ifndef TEST_TD
#define TEST_TD

include "TestDialect.td"

class Test_Op<string mnemonic, list<Trait> traits = []> :
    Op<Test_Dialect, mnemonic, traits>;

def Test_TestOp : Test_Op<"test", []>
{
    let summary = "Test operation.";

    let description = [{
        Test operation.
    }];

    let arguments = (ins);
    let results = (outs);
}

#endif
