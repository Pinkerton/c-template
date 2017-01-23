include_directories(${COMMON_INCLUDES})

add_executable(${PROJECT_NAME}_tests ${SOURCES} ${PROJECT_NAME}_tests.cpp)

# Standard linking to gtest stuff.
target_link_libraries(${PROJECT_NAME}_tests gtest gtest_main)

# Extra linking for the project. This might be what needs to be tinkered with
# to not compile source code for the user's main() and for Google Tests' main().
#target_link_libraries(${PROJECT_NAME}_tests ${PROJECT_NAME}_lib)

# This is so you can do 'make test' to see all your tests run, instead of
# manually running the executable run_tests to see those specific tests.
# add_test(NAME that-test-I-made COMMAND run_tests)

# You can also omit NAME and COMMAND. The second argument could be some other
# test executable.
# TODO: `make test` doesn't work because it wants exact tests specififed here,
# but I would rather it be generic.

#add_test(QueueEnqueueTest run_tests)

# Testing C with googletest
# https://meekrosoft.wordpress.com/2009/11/09/unit-testing-c-code-with-the-googletest-framework/
