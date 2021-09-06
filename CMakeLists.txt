cmake_minimum_required(VERSION 3.0.0)

set(name cp)

project(${name})

file(GLOB_RECURSE src "src/*")

include_directories(includes)
include_directories(externals/spdlog/include)

add_executable(${name} ${src})

find_package (Threads REQUIRED)
target_link_libraries(${name} Threads::Threads stdc++fs)


set_target_properties(${name}
    PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/bin"
)


IF(BUILDTESTS)
    add_subdirectory(tests)
ENDIF()