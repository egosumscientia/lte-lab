add_executable(lte-enb main.cpp enb_context.cpp)
target_link_libraries(lte-enb common utils s1ap nas rrc)