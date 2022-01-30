#pragma once
#include "Physics.h"

namespace DragonsLair {
	class Gravity {
		Gravity(float g);
		Gravity(Mass mass, bool IsGrounded = false);

		~Gravity();
	};


}