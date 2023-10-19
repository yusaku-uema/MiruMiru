#include "SceneManager.h"


//-----------------------------------
// �X�V
//-----------------------------------
AbstractScene* SceneManager::Update()
{

	AbstractScene* NextScene;

	NextScene = mScene->Update();

	if (NextScene != mScene)
	{
		delete mScene;
		mScene = NextScene;
	}

	return mScene;
}

//-----------------------------------
// �f�X�g���N�^
//-----------------------------------
SceneManager::~SceneManager()
{

	delete mScene;

}

//-----------------------------------
// �`��
//-----------------------------------
void SceneManager::Draw() const
{

	mScene->Draw();
}
