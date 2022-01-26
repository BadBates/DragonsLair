#include <Dragon.h>

class Chamber : DragonsLair::Application {
public:
	Chamber() {

	}
	~Chamber() {

	}
};

DragonsLair::Application* DragonsLair::CreateApplication() {
	
	return new Chamber();
}