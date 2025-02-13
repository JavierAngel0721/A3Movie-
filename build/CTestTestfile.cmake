# CMake generated Testfile for 
# Source directory: C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-
# Build directory: C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(A3MovieTests "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/build/Debug/A3MovieTests.exe")
  set_tests_properties(A3MovieTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/CMakeLists.txt;44;add_test;C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(A3MovieTests "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/build/Release/A3MovieTests.exe")
  set_tests_properties(A3MovieTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/CMakeLists.txt;44;add_test;C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(A3MovieTests "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/build/MinSizeRel/A3MovieTests.exe")
  set_tests_properties(A3MovieTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/CMakeLists.txt;44;add_test;C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(A3MovieTests "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/build/RelWithDebInfo/A3MovieTests.exe")
  set_tests_properties(A3MovieTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/CMakeLists.txt;44;add_test;C:/Users/Shrek/OneDrive/Documents/Spring_2025/ECE 3574 (Applied Software Design)/A3Movie-/CMakeLists.txt;0;")
else()
  add_test(A3MovieTests NOT_AVAILABLE)
endif()
subdirs("_deps/catch2-build")
