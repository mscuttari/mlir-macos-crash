#include "TestDialect.h"
#include "mlir/InitAllDialects.h"
#include "mlir/InitAllPasses.h"
#include "mlir/Tools/mlir-opt/MlirOptMain.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/InitLLVM.h"
#include "llvm/Support/SourceMgr.h"

int main(int argc, char* argv[])
{
    mlir::DialectRegistry registry;
    registry.insert<mlir::test::TestDialect>();

    auto result = mlir::MlirOptMain(argc, argv, "Optimizer driver\n", registry);
    return mlir::asMainReturnCode(result);
}
