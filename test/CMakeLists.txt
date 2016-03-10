include_directories(..)
add_executable(mytest test.cpp)
target_link_libraries(mytest base)

add_test(
  mytest mytest
)
SET_PROPERTY(TEST mytest
  PROPERTY ENVIRONMENT 
  "PATH=${CMAKE_BINARY_DIR}/base"
)
