add_executable(testAddition TestAddition.cc)
target_link_libraries(testAddition Catch2::Catch2 addition)

include(${PROJECT_SOURCE_DIR}/ThirdParty/Catch2/contrib/ParseAndAddCatchTests.cmake)
enable_testing()
ParseAndAddCatchTests(testAddition)
