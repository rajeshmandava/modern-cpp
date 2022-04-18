add_executable(modernCPP main.cpp)

add_subdirectory(core-features)

target_link_libraries(modernCPP 
      PRIVATE core-features
)