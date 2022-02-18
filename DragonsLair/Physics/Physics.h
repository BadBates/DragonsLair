#pragma once
#include <iostream>
#include "Gravity.h"
#include "Mass.h"

namespace DragonsLair {
	class Physics
	{
		Mass mass;
		Gravity gravity; 

		Physics();
		~Physics();
	};
}