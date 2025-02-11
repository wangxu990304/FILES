cmake_minimum_required(VERSION 3.5)
project(SimpleGTestExample)

# 查找 GTest 包
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# 添加测试源文件
add_executable(runTests main.cpp)

# 链接 GTest 库
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)