cmake_minimum_required(VERSION 3.10)
project(TestClases)

set(SOURCES main.cpp )
set(PERSON_LIBRARY Persona)
set(STUDENT_LIBRARY Estudiante)
set(NAME_FILE main)

add_executable(${NAME_FILE} ${SOURCES})

add_subdirectory(lib)

target_link_libraries(${NAME_FILE} ${STUDENT_LIBRARY} ${PERSON_LIBRARY})
