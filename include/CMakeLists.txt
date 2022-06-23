add_mlir_dialect(Test test)
add_mlir_doc(Test Test Dialects/ -gen-dialect-doc)

set(LLVM_TARGET_DEFINITIONS Test.td)
