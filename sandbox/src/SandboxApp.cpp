#include <Unamed.h>

class Sandbox : public Unamed::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Unamed::Application* Unamed::CreateApplication() {
	return new Sandbox();
}