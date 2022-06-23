add_mlir_dialect_library(MLIRTest SHARED
        TestDialect.cpp
        Ops.cpp

        DEPENDS
        MLIRTestIncGen

        LINK_COMPONENTS
        Core

        LINK_LIBS PUBLIC
        MLIRIR
        MLIRSupport)
