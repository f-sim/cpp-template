cmake_minimum_required(VERSION 3.0)

project(CPPTemplate LANGUAGES NONE)
enable_language(CXX)

add_subdirectory(ThirdParty)
add_subdirectory(Libraries)
add_subdirectory(Apps)

enable_testing()
