//
// Created by Vaibhav on 19-02-2022.
//

/*
 * custom Vector 3-D maths header
 * both for cartesian 3d systems and color(RGB).
*/

#ifndef RAYTRACINGINONEWEEKEND_VEC3_HPP
#define RAYTRACINGINONEWEEKEND_VEC3_HPP

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

	//Operator overloads.
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

inline std::ostream& operator<<(std::ostream &out, const vec3 &v)
{
	return out << v.cord[0] << ' ' << v.cord[1] << ' ' << v.cord[2];
}

inline vec3 operator+(const vec3 &u, const vec3 &v)
{
	return {
			u.cord[0] + v.cord[0],
			u.cord[1] + v.cord[1],
			u.cord[2] + v.cord[2]
	};
}

inline vec3 operator-(const vec3 &u, const vec3 &v)
{
	return {
			u.cord[0] - v.cord[0],
			u.cord[1] - v.cord[1],
			u.cord[2] - v.cord[2]
	};
}

inline vec3 operator*(const vec3 &u, const vec3 &v)
{
	return {
			u.cord[0] * v.cord[0],
			u.cord[1] * v.cord[1],
			u.cord[2] * v.cord[2]
	};
}

inline vec3 operator*(double t, const vec3 &v)
{
	return {
			t * v.cord[0],
			t * v.cord[1],
			t * v.cord[2]
	};
}

inline vec3 operator*(const vec3 &v, double t)
{
	return {
			t * v.cord[0],
			t * v.cord[1],
			t * v.cord[2]
	};
}

inline vec3 operator/(const vec3 &v, double t)
{
	return (1/t) * v;
}

inline double dot(const vec3 &u, const vec3 &v)
{
	return 	u.cord[0]*v.cord[0] +
			u.cord[1]*v.cord[1] +
			u.cord[2]*v.cord[2];
}

inline vec3 cross(const vec3 &u, const vec3 &v)
{
	return {
			u.cord[1] * v.cord[2] - u.cord[2] * v.cord[1],
			u.cord[2] * v.cord[0] - u.cord[0] * v.cord[2],
			u.cord[0] * v.cord[1] - u.cord[1] * v.cord[0]
	};
}

inline vec3 unit_vector(vec3 v)
{
	return v/v.length();
}
#endif //RAYTRACINGINONEWEEKEND_VEC3_HPP
