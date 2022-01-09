#pragma once

#include <iostream>

#include"Scene.hpp"
#include "CommonData.hpp"
//#include "Game.hpp"

class Game : public Scene {
public:
	Game(CommonData* const commonData);
	virtual ~Game();
	virtual Scene* update() override;
	virtual void draw() const override;

private:
	std::string input_data;
};
template<>
Scene* Scene::makeScene<Game>() {
	return new Game(mCommonData);
}



Game::Game(CommonData* const commonData)
	:Scene(commonData),
	input_data("")
{

}

Game::~Game()
{

}

Scene* Game::update()
{
	std::cin >> input_data;
	if (input_data == "exit") {
		//return 0;
	}
	return this;
}

void Game::draw() const
{
	std::cout << "your player is:" << mCommonData->getPlayerNum() << std::endl;
	std::cout << "your input is:\n" << input_data << std::endl;
}