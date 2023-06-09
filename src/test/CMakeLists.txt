file (GLOB TESTS_HEADERS "*.h")
file (GLOB TESTS_SOURCES "*.cpp")

message(STATUS "header files:" ${TESTS_HEADERS})
message(STATUS "source files:" ${TESTS_SOURCES})

source_group("headers" FILES ${TESTS_HEADERS})
source_group("sources" FILES ${TESTS_SOURCES})

include_directories (.)

#add_library(tests SHARED ${TESTS_HEADERS} ${TESTS_SOURCES})
add_executable(tests ${TESTS_HEADERS} ${TESTS_SOURCES})
target_link_libraries(tests PRIVATE assure_static)
target_include_directories(tests PRIVATE ${CMAKE_SRC_ROOT_DIRECTORY}/assure) 

set_property(TARGET assure PROPERTY FOLDER "libraries")

#set_target_properties(assure PROPERTIES RUNTIME_OUTPUT_DIRECTORY %{PROJECT_BINARY_DIR}/bin)

install (TARGETS assure
         RUNTIME DESTINATION ${PROJECT_SOURCE_DIR}/_install
         LIBRARY DESTINATION ${PROJECT_SOURCE_DIR}/_install
)
