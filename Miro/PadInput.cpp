#include "PadInput.h"

char PadInput::now_key[BUTTONS];
char PadInput::old_key[BUTTONS];
XINPUT_STATE PadInput::input;
Stick PadInput::r_stick;
Stick PadInput::l_stick;


//-----------------------------------
// �R���g���[���̏����X�V
//-----------------------------------
void PadInput::UpdateKey()
{
	// ���̓L�[�擾
	GetJoypadXInputState(DX_INPUT_KEY_PAD1, &input);

	for (int i = 0; i < BUTTONS; i++)
	{
		old_key[i] = now_key[i];
		now_key[i] = input.Buttons[i];
	}

	//�E�X�e�B�b�N
	r_stick.x = input.ThumbRX;
	r_stick.y = input.ThumbRY;

	//���X�e�B�b�N
	l_stick.x = input.ThumbLX;
	l_stick.y = input.ThumbLY;
}

bool PadInput::OnButton(int button)
{
	bool ret = (now_key[button] == 1 && old_key[button] == 0);
	return ret;
}

bool PadInput::OnPressed(int button)
{
	bool ret = (now_key[button] == 1);
	return ret;
}

bool PadInput::OnRelease(int button)
{
	bool ret = (now_key[button] == 0 && old_key[button] == 1);
	return ret;
}

Stick PadInput::GetRStick()
{

	return r_stick;

}

Stick PadInput::GetLStick()
{
	return l_stick;
}

char PadInput::GetOldKey(const int i)
{
	return old_key[i];
}

char PadInput::GetNowKey(const int i)
{
	return now_key[i];
}
