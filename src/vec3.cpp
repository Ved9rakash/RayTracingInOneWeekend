//
// Created by Vaibhav on 19-02-2022.
//

#include "vec3.hpp"
#include <cmath> 	//For std::sqrt()

//Constructors
vec3::vec3() : cord{0, 0, 0}
{}

vec3::vec3(double e0, double e1, double e2)
	: cord{e0, e1, e2}
{}

//Getting coordinates/colors
double vec3::x() const
{
	return cord[0];
}

double vec3::y() const
{
	return cord[1];
}

double vec3::z() const
{
	return cord[2];
}

//Operator overloads.
double vec3::operator[](int i) const
{
	return cord[i];
}

double& vec3::operator[](int i)
{
	return cord[i];
}

//Negative tuple
vec3 vec3::operator-() const
{
	return {-cord[0], -cord[1], -cord[2]};
}

//Mathematical operations
vec3& vec3::operator+=(const vec3& v)
{
	cord[0] += v.cord[0];
	cord[1] += v.cord[1];
	cord[2] += v.cord[2];

	return *this;
}

vec3& vec3::operator*=(const double t)
{
	cord[0] *= t;
	cord[1] *= t;
	cord[2] *= t;

	return *this;
}

vec3& vec3::operator/=(const double t)
{
	return *this *= 1/t;
}

double vec3::length() const
{
	return std::sqrt(length_squared());
}

double vec3::length_squared() const
{
	return (
			cord[0]*cord[0] +
			cord[1]*cord[1] +
			cord[2]*cord[2]
			);
}
