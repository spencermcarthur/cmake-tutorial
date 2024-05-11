# math library
add_library(math SHARED ${CMAKE_SOURCE_DIR}/source/math.cpp)
target_include_directories(math PUBLIC ${CMAKE_SOURCE_DIR}/include)

if (DEBUG)
    target_compile_definitions(math PUBLIC DEBUG)
endif()
