set(SOURCES main.cpp)

add_llvm_executable(test-opt ${SOURCES})
llvm_update_compile_flags(test-opt)

install(TARGETS test-opt RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

get_property(dialect_libs GLOBAL PROPERTY MLIR_DIALECT_LIBS)
get_property(conversion_libs GLOBAL PROPERTY MLIR_CONVERSION_LIBS)

target_link_libraries(test-opt
        PRIVATE ${dialect_libs}
        PRIVATE ${conversion_libs}
        PRIVATE MLIRIR
        PRIVATE MLIROptLib
        PRIVATE MLIRTest)

mlir_check_all_link_libraries(test-opt)
