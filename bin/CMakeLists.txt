# hello executable
add_executable(hello hello.cpp)

# do_math executable
add_executable(do_math do_math.cpp)
target_include_directories(do_math PUBLIC ${CMAKE_SOURCE_DIR}/include)
target_link_libraries(do_math math)
