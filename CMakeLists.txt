# cmake needs this line
cmake_minimum_required(VERSION 2.8)

# Define project name
project(rk3399demo)

add_definitions(-std=c++11)

# set cross compiler path
set(CMAKE_C_COMPILER   /usr/bin/aarch64-linux-gnu-gcc)
set(CMAKE_CXX_COMPILER /usr/bin/aarch64-linux-gnu-g++)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libstdc++")
find_package(OpenCV REQUIRED)
message(STATUS ${OpenCV_LIBRARY_DIRS})
include_directories(
      ${OpenCV_INCLUDE_DIRS} 
)

set(CMAKE_INSTALL_RPATH "lib")

# Declare the executable target built from your sources
add_executable(rk3399demo main.cpp)
target_link_libraries(rk3399demo  ${OpenCV_LIBS}  )

# install target and libraries
install(TARGETS rk3399demo DESTINATION rk3399demo)
