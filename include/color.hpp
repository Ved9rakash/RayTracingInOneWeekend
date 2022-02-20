//
// Created by Vaibhav on 19-02-2022.
//

#ifndef RAYTRACINGINONEWEEKEND_COLOR_HPP
#define RAYTRACINGINONEWEEKEND_COLOR_HPP

#include "vec3.hpp"
#include "ray.hpp"
#include <iostream>

namespace color {
	void write_color(std::ostream &out, color3 pixel_color);
	color3 ray_color(const ray& r);
}

#endif //RAYTRACINGINONEWEEKEND_COLOR_HPP
