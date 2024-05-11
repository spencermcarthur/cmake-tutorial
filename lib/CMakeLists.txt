# math library
add_library(math SHARED ${SRCS}/math.cpp)
target_include_directories(math PUBLIC ${INCL})

if (DEBUG)
    target_compile_definitions(math PUBLIC DEBUG)
endif()
