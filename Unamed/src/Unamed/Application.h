#pragma once

#include "Core.h"

namespace Unamed{
	class UNAMED_API Application
	{
	public:
		Application();
		virtual ~Application();

		//functions
		void Run();
	};

	//to be defind in client
	Application* CreateApplication();

}


