cmake_minimum_required(VERSION 3.00)
project(408_ds)

set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
        test_ds
        test_ds.cpp
        09.cpp
        10.cpp
        11.cpp
        12.cpp
        13.cpp
        14.cpp
        15.cpp
        16.cpp
        17.cpp
        18.cpp
        19.cpp
        20.cpp
        21.cpp
        22.cpp
)

target_link_libraries(
        test_ds
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test_ds)
