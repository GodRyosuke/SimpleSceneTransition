add_library(
	wander_scene_transition
	Game.cpp
	SceneManager.cpp
	GameLoop.cpp
	Title.cpp
)
# target_link_libraries(
# 	wander_scene_test PRIVATE
# 	wander_game_lib
# )
target_include_directories(wander_scene_transition PUBLIC "${PROJECT_SOURCE_DIR}/include")

# add_custom_command(
# 	TARGET wander_scene_test
# 	COMMAND ${CMAKE_COMMAND} -E copy_directory
# 		${PROJECT_SOURCE_DIR}/GameData/ $<TARGET_FILE_DIR:wander_game_test>/GameData/
# )


