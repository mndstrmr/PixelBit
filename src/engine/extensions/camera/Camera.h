#pragma once

#include <glm/glm.hpp>
#include "../../core/Transformation.h"

namespace PixelBit {
	class Camera: public Transformable {
	public:
		virtual glm::mat4 projection() = 0;
		virtual glm::mat4 view() = 0;
		virtual void update_view() = 0;
	};
};