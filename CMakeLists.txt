cmake_minimum_required(VERSION 3.10)

project(MicroRobotSim)

set(CMAKE_CXX_STANDARD 17)

add_executable(MicroRobotSim main.cpp world.cpp robot.cpp)
