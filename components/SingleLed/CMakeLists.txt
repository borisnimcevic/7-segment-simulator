project (SingleLed)

add_library(${PROJECT_NAME}
  SingleLed.cpp
)

add_library(sub::singleledlib ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC 
    ${PROJECT_SOURCE_DIR}/include
)
