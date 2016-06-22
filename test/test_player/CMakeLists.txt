file(GLOB SRCS *.cpp)

add_executable(testfoo ${SRCS})

target_link_libraries(test_player
    ${GTEST_LIBRARIES}
    ${GMOCK_LIBRARIES}
)

install (TARGETS test_player DESTINATION bin)
