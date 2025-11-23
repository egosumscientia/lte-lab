add_executable(lte-ue main.cpp ue_context.cpp)
target_link_libraries(lte-ue common utils s1ap nas rrc)