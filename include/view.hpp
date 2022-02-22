//
// Created by Vaibhav on 20-02-2022.
//

#ifndef RAYTRACINGINONEWEEKEND_VIEW_HPP
#define RAYTRACINGINONEWEEKEND_VIEW_HPP

//Image dimensions
namespace image {
	const auto aspect_ratio = 16.0/9.0;
	const int image_width = 400;
	const int image_height = static_cast<int>(image_width / aspect_ratio); //225;
}

//Camera Dimensions
class camera {
public:
	static point3 origin() { return {0, 0, 0};}
	[[nodiscard]] point3 horizontal() const { return {viewport_width, 0, 0};}
	[[nodiscard]] point3 vertical() const { return {0, viewport_height, 0};}
	[[nodiscard]] point3 lower_left_corner() const { return (origin() - horizontal()/2 - vertical()/2 - vec3(0, 0, focal_length)); }

public:
	double viewport_height = 2.0;
	double viewport_width = image::aspect_ratio * viewport_height; //3.55
	double focal_length = 1.0;
};


#endif //RAYTRACINGINONEWEEKEND_VIEW_HPP
