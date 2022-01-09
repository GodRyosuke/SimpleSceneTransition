#pragma once
#include <string>

class CommonData;

class Scene {
protected:
    //�R���X�g���N�^
    //Scene() {}
    Scene(CommonData* const commonData) :
        mCommonData(commonData)
    {}

public:
    //�R�s�[�֎~
    Scene(const Scene&) = delete;
    //�R�s�[�֎~
    Scene& operator=(const Scene&) = delete;

    //���z�֐��������f�X�g���N�^
    virtual ~Scene() = default;

public:
    virtual Scene* update() = 0;
    virtual void draw() const = 0;

protected:
    CommonData* const mCommonData;

    //���̐����p�֐�
    template<typename T>
    Scene* makeScene();
};