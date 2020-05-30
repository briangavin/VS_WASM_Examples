# VS_WASM_Examples
 Examples for using CMake with Emscripten and Visual Studio 2019
 
 Steps
 1.  Install Visual Studio 2019 with CMake check box.  Any version.
 2.  Install Emscripten SDK and remember the installed path.
 3.  Start Visual Studio 2019
 4.  In Solution Explorer Tabe select the file CMakeSettings.json
 5.  Right click mouse select 'Edit CMake Setting'
 6.  Select 'WASM-Release'  
 7.  Set value for CMAKE_TOOLCHAIN file to location in emscripten sdk for 'Emscripten.cmake' something like upstream/cmake/Modules/Platform/
 8.  Set value for EMSCRIPTEN_PATH to install path of Emscripten SDK
 9.  Select build menu 'Build All'
 10.  Should generate file HelloWASM\MyFirstWASM.html
 11.  Use a http server and open generated file in Web Browser ie localhost:81/MyFirstWASM.html
 12.  Repeat steps for WASM-Debug
 
Other useful CMAKE variables that can be set in CMakeSettings.json
 1.  CMAKE_EXE_LINKER_FLAGS - command line linker flags
 2.  CMAKE_CXX_FLAGS  - command line flags to pass to clang cpp compiler
 3.  CMAKE_C_FLAGS - command line flags to pass to clang for c compiler