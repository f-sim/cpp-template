add_library(addition Sources/Addition.cc)
target_include_directories(addition PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Includes)

add_subdirectory(Tests)
