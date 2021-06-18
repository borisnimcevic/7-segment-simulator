project (DisplayDriver)

add_library(${PROJECT_NAME}
  DisplayDriver.cpp
)

add_library(sub::DisplayDriverlib ALIAS ${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
    PUBLIC 
    ${PROJECT_SOURCE_DIR}/include
)
