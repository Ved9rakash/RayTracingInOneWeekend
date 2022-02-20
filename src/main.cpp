#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

#include "vec3.hpp"
#include "color.hpp"
#include "ray.hpp"
#include "imgCam.hpp"

#include <iostream>

int main()
{

	//Rendering
	std::cout << "P3\n" << image::image_width << ' ' << image::image_height << "\n255\n";


	for (int j = image::image_height - 1; j >=0; --j) {
		std::cerr << "\rScanLines Remaining: " << j << ' ' << std::flush;
		for (int i = 0; i < image::image_width; ++i) {
			auto u = double(i) / (image::image_width - 1);
			auto v = double(i) / (image::image_height - 1);

			ray r(
					camera::origin,
					camera::lower_left_corner + u*camera::horizontal - v*camera::vertical - camera::origin
					);

			color3 pixel_color = color::ray_color(r);
			color::write_color(std::cout, pixel_color);
		}
	}
	std::cerr << "\nDone.\n";
}