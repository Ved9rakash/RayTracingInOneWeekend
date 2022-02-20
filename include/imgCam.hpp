//
// Created by Vaibhav on 20-02-2022.
//

#ifndef RAYTRACINGINONEWEEKEND_IMGCAM_HPP
#define RAYTRACINGINONEWEEKEND_IMGCAM_HPP

//Image dimensions
namespace image {
	const auto aspect_ratio = 16.0/9.0;
	const int image_width = 400;
	const int image_height = static_cast<int>(image_width / aspect_ratio);
}

//Camera Dimensions
namespace camera {
	auto viewport_height = 2.0;
	auto viewport_width = image::aspect_ratio * viewport_height;
	auto focal_length = 1.0;

	auto origin = point3(0, 0, 0);
	auto horizontal = vec3(viewport_width, 0, 0);
	auto vertical = vec3(0, viewport_height, 0);
	auto lower_left_corner = origin - horizontal/2 - vertical/2 - vec3(0, 0, focal_length);
}

#endif //RAYTRACINGINONEWEEKEND_IMGCAM_HPP
