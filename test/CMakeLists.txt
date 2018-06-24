#=======================================================
#NOTES as I figured this out:
#
# How is ${GTEST_DIR}/include getting added to this project?
#   I had to add the include directory below
#
# How is the gtest_main library below getting built and how is it being found?
# What tells cmake to where to look for target link libraries?
# How does the name 'gtest_main' get translated into the actual file name of "libgtest_main.a"?
#   gtest_main is defined in the googletest/CMakeLists.txt as a target with the
#   CXX_Library macro.  This macro is defined in googletest/cmake/internal_utils.cmake
#   that is included in googletest/CMakeLists.txt.  It basically is just an add_library()
#   call with some arguments specified.  The <name> in the add_library command corresponds to the
#    logical target name and must be globally unique within a project. The actual file name of the
#    library built is constructed based on conventions of the native platform (such as lib<name>.a or <name>.lib).
#    By default the library file will be created in the build tree directory corresponding to the source tree directory
#    in which thecommand was invoked.
#
#    So, what is the 'source tree directory in which the above command is invoked?"
#      The root CMakeLists.txt is using add_subdirectory where it specifies a build directory
#      of <root>/build/gtest to get bound to this subdirectory source dir.  I think in this context
#      source tree directory is the directory where the CMakeList.txt is located not actual source code
#      necessarily.
#    
#    Here is the basic structure:
#    <root>/CMakeLists.txt - root cmake file that adds gtest/googletest as a subdir AND /test as a subdir (this file)
#    So will the gtest_main library build by gtest/googletest/CMakeLists.txt be visible to /test/CMakeLists.txt, which
#    is effectively at a peer level?
#       To answer the above, I had to dig into this:  http://www.aosabook.org/en/cmake.html, and think this is what happens:
#           1. Configure Step:  I speculate that CMAKE is smart enough in this step to create a 'global' list of all
#               libraries it encounters across the whole project so that any CMakeLists.txt file at any level of the project
#               can reference a library added at any other level in the project.
#           2. Generate Step:  write out makefiles that will build the project
#
#    When I ran this is built the test_main executable in /build/test rather than /build, why?
#    


include_directories("${PROJECT_SOURCE_DIR}/include" "${PROJECT_SOURCE_DIR}/gtest/googletest/include")

set(TEST_SOURCES ${PROJECT_SOURCE_DIR}/test/QuickStartTest.cpp)

#QuickStart is created by add_library(QuickStart STATIC ${SOURCES} in the root CMakeLists.txt file
#gtest_main is added as part of the google test CMAKE files
set(TEST_LIBS QuickStart gtest_main)

add_executable(test_main ${TEST_SOURCES})
target_link_libraries(test_main ${TEST_LIBS})

#add a test to be run by ctest - command is the exectuable to be called
add_test(NAME QuickStartTest COMMAND test_main)