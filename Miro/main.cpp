#include "DxLib.h"


#define FRAMERATE 60 //�t���[�����[�g

#define SCREEN_WIDTH 640 //��ʃT�C�Y�i���j

#define SCREEN_HEIGHT 480 //��ʃT�C�Y�i�c�j

/***********************************************
 * �v���O�����̊J�n
 ***********************************************/
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
	LPSTR lpCmdLine, int nCmdShow)
{

	double dNextTime = GetNowCount();

	SetMainWindowText("Super Mario Bros");

	ChangeWindowMode(TRUE);		// �E�B���h�E���[�h�ŋN��

	SetAlwaysRunFlag(TRUE);		//�E�B���h�E����A�N�e�B�u�łȂ��Ă��������p�����邩�ݒ�

	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);	//��ʃT�C�Y�̐ݒ�

	if (DxLib_Init() == -1) return -1;	// DX���C�u�����̏���������

	SetDrawScreen(DX_SCREEN_BACK);	// �`����ʂ𗠂ɂ���

	//SceneManager* sceneMng; //�V�[���}�l�[�W���[

	//sceneMng = new SceneManager((AbstractScene*)new Title()); //�V�[���}�l�[�W���[�Ƀ^�C�g�����Z�b�g

	//// �Q�[�����[�v
	//while ((ProcessMessage() == 0) && (sceneMng->Update() != nullptr))
	//{

	//	ClearDrawScreen();		// ��ʂ̏�����
	//	PadInput::UpdateKey();
	//	sceneMng->Draw();

	//	ScreenFlip();			// ����ʂ̓��e��\��ʂɔ��f

	//	//�t���[�����[�g�̐ݒ�
	//	dNextTime += 1 / FRAMERATE * 1000;

	//	if (dNextTime > GetNowCount())
	//	{
	//		WaitTimer(static_cast<int>(dNextTime) - GetNowCount());
	//		//static_cast<int>�@int�^�ɕϊ��i�L���X�g�j
	//	}
	//	else
	//	{
	//		dNextTime = GetNowCount(); //�␳
	//	}

	//	//�����I��
	//	if (PadInput::OnButton(XINPUT_BUTTON_BACK))
	//	{
	//		break;
	//	}

	//}

	return 0;
}