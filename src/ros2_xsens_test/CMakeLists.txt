cmake_minimum_required(VERSION 3.8)
project(ros2_xsens_test)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(xscommon REQUIRED)

# add_executable(xsens_build_test src/test.cpp )
# target_link_libraries(xsens_build_test 
#             xsens_sdk::xsens_sdk)


if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# install(TARGETS
#   xsens_build_test
#   DESTINATION lib/${PROJECT_NAME})
ament_package()
