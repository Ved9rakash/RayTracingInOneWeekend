//
// Created by Vaibhav on 19-02-2022.
//

#ifndef RAYTRACINGINONEWEEKEND_VEC3_HPP
#define RAYTRACINGINONEWEEKEND_VEC3_HPP

#include <cmath>
#include <iostream>

class vec3 {
public:
	//Constructors
	vec3();
	vec3(double e0, double e1, double e2);

	//Getting coordinates/color
	[[nodiscard]] double x() const;
	[[nodiscard]] double y() const;
	[[nodiscard]] double z() const;
	double operator[](int i) const;
	double& operator[](int i);

	//Negative tuple
	vec3 operator-() const;

	//Mathematical operations
	vec3& operator+=(const vec3 &v);
	vec3& operator*=(double t);
	vec3& operator/=(double t);

	//Finding length of vector
	[[nodiscard]] double length() const;
	[[nodiscard]] double length_squared() const;

public:
	double cord[3];
};

//Type alias for VEC3
using point3 = vec3;
using color3 = vec3;

//vec3 utility functions
inline std::ostream& operator<<(std::ostream &out, const vec3 &v);
inline vec3 operator+(const vec3 &u, const vec3 &v);
inline vec3 operator-(const vec3 &u, const vec3 &v);
inline vec3 operator*(const vec3 &u, const vec3 &v);
inline vec3 operator*(double t, const vec3 &v);
inline vec3 operator*(const vec3 &v, double t);
inline vec3 operator/(const vec3 &v, double t);
inline double dot(const vec3 &u, const vec3 &v);
inline vec3 cross(const vec3 &u, const vec3 &v);
inline vec3 unit_vector(vec3 v);


#endif //RAYTRACINGINONEWEEKEND_VEC3_HPP
