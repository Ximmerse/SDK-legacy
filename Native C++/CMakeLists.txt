# Set the minimum required version of cmake.
cmake_minimum_required(VERSION 2.6)

# Set the entire solution name.
project(testXHawk)

# Add an executable to the project using the specified source files.
file(GLOB SOURCES
    X-Hawk.h
    test.cpp
)
add_executable(${PROJECT_NAME} ${SOURCES})

# link libs
string(REGEX MATCH "Win64" ISWIN64 ${CMAKE_GENERATOR})
if("${ISWIN64}" STREQUAL "Win64")
    set(XHawk_LIB_FOLDER "x64")
else("${ISWIN64}" STREQUAL "Win64")
    set(XHawk_LIB_FOLDER "x86")
endif("${ISWIN64}" STREQUAL "Win64")
set(XHawk_LIBS
    debug ${XHawk_LIB_FOLDER}/Debug/X-Hawk
    optimized ${XHawk_LIB_FOLDER}/Release/X-Hawk
)
target_link_libraries(${PROJECT_NAME} ${XHawk_LIBS})

# copy libs to build path
file(GLOB XHawk_DLLS
    ${XHawk_LIB_FOLDER}
)
file(COPY ${XHawk_DLLS} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
