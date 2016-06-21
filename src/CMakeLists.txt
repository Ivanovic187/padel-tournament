set (
    PADEL_TOUR_SRCS
    Player.cc   main.cpp
    )

include_directories(include)
add_executable(padel_tournament ${PADEL_TOUR_SRCS})
