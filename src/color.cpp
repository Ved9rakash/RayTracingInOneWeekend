//
// Created by Vaibhav on 19-02-2022.
//

#include "color.hpp"

void write_color(std::ostream &out, color3 pixel_color)
{
/*	Print the color .ppm values in console/file
 *	by converting the window coordinates [0, 1]
 *	to .ppm file coordinates [0, 255].
*/
	out << static_cast<int>(255.99 * pixel_color.x()) << ' '
		<< static_cast<int>(255.99 * pixel_color.y()) << ' '
		<< static_cast<int>(255.99 * pixel_color.z()) << '\n';
}
