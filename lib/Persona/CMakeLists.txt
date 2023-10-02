
add_library(${PERSON_LIBRARY}
    persona.cpp
    persona.h
)


target_include_directories(${PERSON_LIBRARY} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
