add_library(RealRandom "")
target_sources(RealRandom
    PRIVATE
        ${CMAKE_CURRENT_LIST_DIR}/realRandom_urandom.spec.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/realRandom_urandom.hpp
    )

target_include_directories(RealRandom
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}
    )