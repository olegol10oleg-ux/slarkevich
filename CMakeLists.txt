cmake_minimum_required(VERSION 4.2)
project(slarkevich)

set(CMAKE_CXX_STANDARD 20)

add_executable(slarkevich main.cpp
        DarkPact.cpp
        DarkPact.h
        Pounce.cpp
        Pounce.h
        SalwaterShiv.cpp
        SalwaterShiv.h
        ShadowDance.cpp
        ShadowDance.h
        DepthShroud.cpp
        DepthShroud.h
)
