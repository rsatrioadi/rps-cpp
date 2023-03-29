cmake_minimum_required(VERSION 3.0.0)
project(rps-cpp VERSION 0.1.0)

include(CTest)
enable_testing()

set(SOURCE_FILES
        Choice.h
        Choice.cpp
        Player.h
        Player.cpp
        RandomPlayer.h
        RandomPlayer.cpp
        HumanPlayer.h
        HumanPlayer.cpp
        BeatLastPlayer.h
        BeatLastPlayer.cpp
        BeatSelfPlayer.h
        BeatSelfPlayer.cpp
        Game.h
        Game.cpp
        main.cpp)

add_executable(rps-cpp ${SOURCE_FILES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
