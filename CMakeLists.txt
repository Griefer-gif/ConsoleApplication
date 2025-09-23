# CMakeList.txt: arquivo de projeto de CMake de nível superior, fazer configuração global
# e inclua subprojetos aqui.
#
cmake_minimum_required (VERSION 3.8)

# Habilite a Recarga Dinâmica para compiladores MSVC, se houver suporte.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("ConsoleAppCmake")

# Inclua subprojetos.
add_subdirectory ("ConsoleAppCmake")

#CMAKE stuff

option(BUILD_TESTS "Build unit tests." OFF)
if(BUILD_TESTS)
  enable_testing()
  find_package(GTest REQUIRED)
  include(GoogleTest)
  message(STATUS "Building tests...")

  add_executable(tests 
  tst/tst.cc
  )

  target_link_libraries(tests
    GTest::gmock
    GTest::gtest
  )
  gtest_discover_tests(tests)
endif()
