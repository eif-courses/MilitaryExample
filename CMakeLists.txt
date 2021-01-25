cmake_minimum_required(VERSION 3.17)
project(MilitaryExample)

set(CMAKE_CXX_STANDARD 14)

add_executable(MilitaryExample main.cpp User.cpp User.h Actions.cpp Actions.h Countries.h Statistics.cpp Statistics.h Country.cpp Country.h)