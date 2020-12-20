# CMakeList.txt : CMake project for HelloWASM, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

include_directories(
${EMSCRIPTEN}/system/include/emscripten
)

#add defines here
add_definitions( )

# Add source to this project's executable.
add_executable (HelloWASM "HelloWASM.cpp" "HelloWASM.h"  "Hello.cpp" "Hello.h")

# TODO: Add tests and install targets if needed.
# Have emscripten generate an simple example html file
set_target_properties(
    HelloWASM
    PROPERTIES 
        OUTPUT_NAME "MyFirstWASM"
        SUFFIX ".html"
)			   
