# hello
add_executable(hello ${SRCS}/hello.cpp)

# do_math
add_executable(do_math ${SRCS}/do_math.cpp)
target_include_directories(do_math PUBLIC ${INCL})
target_link_libraries(do_math math)
