cmake_minimum_required(VERSION 3.5)
project(htmlTest)
set(CMAKE_BUILD_TYPE Debug)
add_definitions(-W -Wall -std=c++11)
set(sources main.cpp
	HtmlBuilder.cpp
	HtmlTag.cpp
	)
add_executable(${PROJECT_NAME} ${sources})
