#include "GlfwApp.h"

#include "GlfwRenderWindow.h"

namespace dyno 
{
	GlfwApp::GlfwApp(int argc /*= 0*/, char **argv /*= NULL*/)
	{
	}

	GlfwApp::~GlfwApp()
	{
	}

	void GlfwApp::initialize(int width, int height, bool usePlugin)
	{
		//A hack to address the slow launching problem
#ifdef CUDA_BACKEND
		cudaSetDevice(0);
		cudaFree(0);
#endif // CUDA_BACKEND

		mRenderWindow = std::make_shared<GlfwRenderWindow>();

		mRenderWindow->initialize(width, height);
	}

	void GlfwApp::mainLoop()
	{
		mRenderWindow->mainLoop();
	}
}