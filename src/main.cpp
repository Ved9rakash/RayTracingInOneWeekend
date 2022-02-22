#define STB_IMAGE_IMPLEMENTATION

#include "vec3.hpp"
#include "color.hpp"
#include "ray.hpp"
#include "view.hpp"

#include "stb_image.h"

#include <iostream>

int main() {

	camera cam;		//Defining camera.

	std::cout << "P3\n" << image::image_width << ' ' << image::image_height << "\n255\n";	//400X225

/* We will create rays going from every pixel in image horizontally
 * and assign color to it, from the camera view, by taking the
 * points of intersection of ray with circle equation in color.hpp.
 */
	for (int j = image::image_height - 1; j >=0; --j) {
		std::cerr << "\rScanLines Remaining: " << j << ' ' << std::flush;

		for (int i = 0; i < image::image_width; ++i) {
			/* Moving pixel to pixel from top left corner to right
			 * in downward fashion till we achieve bottom right corner.
			 */
			auto horizontalPixel = double(i) / (image::image_width - 1);  	// i/399
			auto verticalPixel = double(j) / (image::image_height - 1); 		// j/224

			/// Creating the ray. refer @param color.hpp
			ray r(
					camera::origin(),
					cam.lower_left_corner() +
							horizontalPixel*cam.horizontal() +
							verticalPixel*cam.vertical() -
							camera::origin()
			);

			/* Setting the color of ray according to the point of intersection
			 * with circle and writing to window screen with write_color()
			 */
			color3 pixel_color = color::ray_color(r);
			color::write_color(std::cout, pixel_color);
		}
	}
	std::cerr << "\nDone.\n";
}