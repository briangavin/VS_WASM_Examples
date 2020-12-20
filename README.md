# VS_WASM_Examples
 Examples for using CMake with Emscripten and Visual Studio 2019
 
 Steps
 1.  Install Visual Studio 2019 with CMake check box.  Any version.  This should also install Ninja build system.
 2.  Install Emscripten SDK 2.0.11+ recommended
 3.  Start Visual Studio 2019
 4.  In Solution Explorer Tab select the file CMakeSettings.json
 5.  Right click mouse select 'Edit CMake Setting'
 6.  Select 'WASM-Release'  
 7.  Select build menu 'Build All'
 8.  Should generate file HelloWASM\MyFirstWASM.html
 9.  Use a http server and open generated file in Web Browser ie localhost:81/MyFirstWASM.html
 10.  Repeat steps for WASM-Debug
 11.  If you have problems check to be sure enviroment variable EMSCRIPTEN is set to correct install path.

 
Other useful CMAKE variables that can be set in CMakeSettings.json
 1.  CMAKE_EXE_LINKER_FLAGS - command line linker flags
 2.  CMAKE_CXX_FLAGS  - command line flags to pass to clang cpp compiler
 3.  CMAKE_C_FLAGS - command line flags to pass to clang for c compiler
