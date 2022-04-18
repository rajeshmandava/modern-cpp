add_library(core-features "")

target_sources(core-features 
      PRIVATE ${CMAKE_CURRENT_LIST_DIR}/useAuto.cpp
      PUBLIC ${CMAKE_CURRENT_LIST_DIR}/useAuto.h
)

target_include_directories(core-features 
      PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)