add_executable(test_room test_room.cpp)
target_link_libraries(test_room Boost::unit_test_framework room)
add_test(NAME test_room COMMAND test_room)