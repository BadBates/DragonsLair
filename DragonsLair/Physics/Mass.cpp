#include "Mass.h"

namespace DragonsLair {
	Mass::Mass(float w, float g) {
		std::cout << "whats the weight weight \n";
		float mass;
		std::cin>>w;
		g = 9.81f;

		mass = w / g;

	}
	Mass::~Mass(){}


}