//
// Created by Vaibhav on 19-02-2022.
//

#ifndef RAYTRACINGINONEWEEKEND_COLOR_HPP
#define RAYTRACINGINONEWEEKEND_COLOR_HPP

#include "vec3.hpp"
#include <iostream>

void write_color(std::ostream &out, color3 pixel_color) {
	out << static_cast<int>(255.99 * pixel_color.x()) << ' '
		<< static_cast<int>(255.99 * pixel_color.y()) << ' '
		<< static_cast<int>(255.99 * pixel_color.z()) << '\n';
}



#endif //RAYTRACINGINONEWEEKEND_COLOR_HPP
