#pragma once
#include "AbstractScene.h"
class GameMain :
    public AbstractScene
{
private:


public:

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;
};

