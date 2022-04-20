add_library(core-features "")

target_sources(core-features 
      PRIVATE ${CMAKE_CURRENT_LIST_DIR}/useAuto.cpp
      PUBLIC ${CMAKE_CURRENT_LIST_DIR}/useAuto.h
      ${CMAKE_CURRENT_LIST_DIR}/studyVirtualOverride.h
      ${CMAKE_CURRENT_LIST_DIR}/studyVirtualOverride.cpp
)

target_include_directories(core-features 
      PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)