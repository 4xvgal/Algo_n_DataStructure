add_library(measuretime "")
target_sources(measuretime
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/measuretime.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/measuretime.hpp
    )

target_include_directories(measuretime
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )