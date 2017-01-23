include_directories(${COMMON_INCLUDES})

# Library
add_library(${PROJECT_NAME}_lib ${SOURCES})

# Main executable
add_executable(${PROJECT_NAME} main.c) # or ${SOURCES}?
target_link_libraries(${PROJECT_NAME} ${PROJECT_NAME}_lib)
