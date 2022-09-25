cmake_minimum_required(VERSION 3.20)

project(revnine)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_definitions(-D_USE_MATH_DEFINES)

set(SRCS 
	"revnine.cxx"
	"revnine.hxx"
	"gcd.cxx"
	"gcd.hxx"
)

add_executable(${PROJECT_NAME} ${SRCS})

target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR})
