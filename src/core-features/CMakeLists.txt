add_library(core-features "")

target_sources(core-features 
      PRIVATE ${CMAKE_CURRENT_LIST_DIR}/useAuto.cpp
      PUBLIC ${CMAKE_CURRENT_LIST_DIR}/useAuto.h
      ${CMAKE_CURRENT_LIST_DIR}/studyVirtualOverride.h
      ${CMAKE_CURRENT_LIST_DIR}/studyVirtualOverride.cpp
      ${CMAKE_CURRENT_LIST_DIR}/uniformInitialization.cpp
      ${CMAKE_CURRENT_LIST_DIR}/uniformInitialization.h
      ${CMAKE_CURRENT_LIST_DIR}/rangeBasedFor.cpp
      ${CMAKE_CURRENT_LIST_DIR}/rangeBasedFor.h
)

target_include_directories(core-features 
      PUBLIC ${CMAKE_CURRENT_LIST_DIR}
)