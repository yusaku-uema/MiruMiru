#pragma once
#include "AbstractScene.h"
class Title :
    public AbstractScene
{

    // �I�����Ă��郁�j���[
    int select_menu;

    //�J�[�\����Y���W
    int cursor_y;

    //����Ԋu����
    int input_margin;

    int stick_y;

    //�^�C�g���摜
    int title_image;

public:

    //�R���X�g���N�^
    Title();

    //�f�X�g���N�^
    ~Title();

    //�`��ȊO�̍X�V�����s
    AbstractScene* Update() override;

    //�`��Ɋւ��邱�Ƃ�����
    void Draw() const override;
};

