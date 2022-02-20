//
// Created by Vaibhav on 20-02-2022.
//

#ifndef RAYTRACINGINONEWEEKEND_RAY_HPP
#define RAYTRACINGINONEWEEKEND_RAY_HPP

#include "vec3.hpp"

class ray {
public:
	ray() {};
	ray(const point3& origin, const vec3& direction)
		: orig(origin), dir(direction)
	{}

	point3 origin() const { return orig; }
	vec3 direction() const { return dir;}

	point3 at(double scale) const {
		return orig + scale * dir;
	}

public:
	point3 orig;
	vec3 dir;
};

#endif //RAYTRACINGINONEWEEKEND_RAY_HPP
