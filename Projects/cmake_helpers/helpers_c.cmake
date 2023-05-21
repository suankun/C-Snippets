cmake_minimum_required(VERSION 3.5.1)

function(set_target_c_standard target standard)
set_target_properties(
    ${target}
    PROPERTIES
        C_STANDARD ${standard}
        C_STANDARD_REQUIRED YES
        C_EXTENSIONS NO
)
endfunction()

function(enable_target_c_warnings target)
    target_compile_options(
        ${target}
        PRIVATE
          -Wall
          -Wextra
          -Werror
          -Wundef
          -Wuninitialized
          -Wshadow
          -Wpointer-arith
          -Wcast-align
          -Wcast-qual
          -Wunused-parameter
          -Wdouble-promotion
          -Wnull-dereference
    )
endfunction()
