project (SingleLED)

add_library(${PROJECT_NAME}
  SingleLED.cpp
)

add_library(sub::singleled ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC 
    ${PROJECT_SOURCE_DIR}/include
)
