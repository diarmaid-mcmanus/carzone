cmake_minimum_required (VERSION 2.6)
project (carzone)
add_executable(carzone carzone.cpp)

# add subdirectory then library TODO temp disable
#add_subdirectory(cpr)
#include_directories(${CPR_INCLUDE_DIRS})
#target_link_libraries(carzone ${CPR_LIBRARIES})

install (TARGETS carzone DESTINATION bin)
