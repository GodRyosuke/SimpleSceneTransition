add_executable(
	wander_scene_test
	main.cpp
)
target_link_libraries(
	wander_scene_test PRIVATE
	wander_scene_transition
)
target_include_directories(wander_scene_test PUBLIC "${PROJECT_SOURCE_DIR}/include")

# add_custom_command(
# 	TARGET wander_scene_test
# 	COMMAND ${CMAKE_COMMAND} -E copy_directory
# 		${PROJECT_SOURCE_DIR}/GameData/ $<TARGET_FILE_DIR:wander_game_test>/GameData/
# )


add_test(NAME WanderLibTests COMMAND wander_scene_test)