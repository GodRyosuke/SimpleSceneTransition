#include"SceneManager.hpp"
#include "CommonData.hpp"

class Title;
//class Game;

SceneManager::SceneManager()
    :Scene(new CommonData()),
    mScene(makeScene<Title>())
{
}


SceneManager::~SceneManager() {
    delete mScene;
    delete mCommonData;
}

void SceneManager::SceneManagerUpdate() {
    Scene* p = mScene->update();
    if (p != mScene) {
        delete mScene;
        mScene = p;
    }
}

void SceneManager::draw() const {
    mScene->draw();
}