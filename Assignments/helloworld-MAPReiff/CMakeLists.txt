cmake_minimum_required(VERSION 3.12)

# project's name
project(HelloWorld)

set(CMAKE_CXX_STANDARD 14)

# check for windows
if (WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++0x")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

set(SOURCE_FILES main.cpp)

include_directories(src)
# include the function folder
add_subdirectory(src)
# this is to include the test folder, for running different test on code
#add_subdirectory(test)

add_executable(main_executable ${SOURCE_FILES})

target_link_libraries(main_executable fullName_func)