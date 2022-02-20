//
// Created by Vaibhav on 19-02-2022.
//

#include "color.hpp"
#include "vec3.hpp"



void color::write_color(std::ostream &out, color3 pixel_color)
{
/*	Print the color .ppm values in console/file
 *	by converting the window coordinates [0, 1]
 *	to .ppm file coordinates [0, 255].
*/
	out << static_cast<int>(255.99 * pixel_color.x()) << ' '
		<< static_cast<int>(255.99 * pixel_color.y()) << ' '
		<< static_cast<int>(255.99 * pixel_color.z()) << '\n';
}

color3 color::ray_color(const ray& r)
{
	vec3 unit_direction = unit_vector(r.direction());
	auto scale = 0.5 * ((unit_direction.y()) + 1.0);

	return (1.0 - scale) * color3(1.0, 1.0, 1.0) + scale * color3(0.5, 0.7, 1.0);
}

