cmake_minimum_required(VERSION 3.7)

project(pointers)

set(examples
        "examples/1_pointers/1.c"
        "examples/1_pointers/2.c"
        "examples/1_pointers/3.cpp"
        "examples/1_pointers/4.cpp"

        "examples/2_free_store/1.cpp"
        "examples/2_free_store/2.cpp"
        "examples/2_free_store/3.cpp"
        "examples/2_free_store/4.cpp"
        "examples/2_free_store/5.cpp"
        "examples/2_free_store/6.cpp"
)

foreach (example ${examples})
    string(REPLACE "\.cpp" "" target "${example}")
    string(REPLACE "\.c" "" target "${target}")
    string(REPLACE "/" "-" target "${target}")

    add_executable("${target}" "${example}")
    target_compile_options("${target}" PRIVATE "-Werror" "-Wall" "-Wextra" "-Wpedantic" "-Wconversion" "-Wno-format")
endforeach ()
