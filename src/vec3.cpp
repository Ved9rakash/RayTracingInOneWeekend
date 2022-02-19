//
// Created by Vaibhav on 19-02-2022.
//

#include "vec3.hpp"
#include <cmath> 	//For std::sqrt()


//Constructors
vec3::vec3() : cord{0, 0, 0}
{}

vec3::vec3(double e0, double e1, double e2) : cord{e0, e1, e2}
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


//Vec3 utility functions
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