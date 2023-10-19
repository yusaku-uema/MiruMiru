#pragma once
#include"DxLib.h"

#define BUTTONS 16



//�X�e�B�b�N
struct Stick
{
	short x;	//�����l
	short y;	//�c���l
};


class PadInput
{
private:

	static char now_key[BUTTONS]; //����̓��̓L�[
	static char old_key[BUTTONS]; //�O��̓��̓L�[
	static XINPUT_STATE input; //�p�b�h
	static Stick r_stick; //�E�X�e�B�b�N
	static Stick l_stick; //���X�e�B�b�N

private:

	//�R���X�g���N�^
	PadInput() = default;
public:

	//�p�b�h���̍X�V
	static void UpdateKey();

	//�{�^���������ꂽ�u��
	static bool OnButton(int button);

	//�{�^���������Ă��
	static bool OnPressed(int button);

	//�{�^���𗣂����u��
	static bool OnRelease(int button);

	//�E�X�e�B�b�N�̎擾
	static Stick GetRStick();

	//���X�e�B�b�N�̎擾
	static Stick GetLStick();

	static char GetOldKey(const int i);

	static char GetNowKey(const int i);

};

