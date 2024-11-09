#pragma once
#ifndef _JECTOR_H_
#define _JECTOR_H_

#include <stdexcept>

// Vector 3
template <typename T>
class vec3 {
private:
	T a;
	T b;
	T c;
	
public:
	// Constructors
	vec3();
	vec3(T a, T b, T c);
	vec3(T abc);

	// Component Access Operator
	T operator[](int index);

	// Vector-Constant Operations
	vec3<T> operator*(const int &otherInt);
	vec3<T> operator*(const double &otherDouble);
	vec3<T> operator/(const int &otherInt);
	vec3<T> operator/(const double &otherDouble);
	
	// Inter-Vector Operations
	vec3<T> operator+(const vec3<T> &otherVec);
	vec3<T> operator-(const vec3<T> &otherVec);
	
	float magnitude(); // Return the Magnitude of this vec3
	vec3<T> normalize(); // Return the Unit Vector of this vec3
	float dot(const vec3<T> &otherVec); // Return this vec3 dotted with the parameter vec3
	vec3<T> cross(const vec3<T> &otherVec); // Return this vec3 crossed with the parameter vec3
	
};

/// Default Constructor
/// @return Default Vector3 of value {0, 0, 0}
template <typename T>
vec3<T>::vec3() {
	this->a = this->b = this->c = 0;
}

/// Full Constructor
/// @param The values for each of this Vector3's components
/// @return Vector3 of value {a, b, c}
template <typename T>
vec3<T>::vec3(T a, T b, T c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

/// Single Constructor
/// @param The value for all of this Vector3's components
/// @return Vector3 of value {abc, abc, abc}
template <typename T>
vec3<T>::vec3(T abc) {
	this->a = this->b = this->c = abc;
}

/// Access Operator
/// @param The index of the desired item
/// @return Item 1:a 2:b or 3:c, otherwise out of bounds error
template <typename T>
T vec3<T>::operator[](int index) {
	if (index == 1) {
		return this->a;
	} else if (index == 2) {
		return this->b;
	} else if (index == 3) {
		return this->c;
	} else {
		throw std::out_of_range("index can only be 1, 2, or 3");
	}
}

/// Multiplication by Int Operator
/// @param The int to multiply the vec3 by
/// @return The multiplied vec3
template <typename T>
vec3<T> vec3<T>::operator*(const int &otherInt) {
	return vec3(this->a * otherInt, this->b * otherInt, this->c * otherInt);
}

/// Multiplication by Double Operator
/// @param The double to multiply the vec3 by
/// @return The multiplied vec3, this is always vec3<double>
template <typename T>
vec3<T> vec3<T>::operator*(const double &otherDouble) {
	vec3 vecDouble(0.0);
	
	vecDouble.a = this->a * otherDouble;
	vecDouble.b = this->b * otherDouble;
	vecDouble.c = this->c * otherDouble;
	
	return vecDouble;
}

/// Division by Int Operator
/// @param The int to divide the vec3 by
/// @return The divided vec3, this is always vec3<double>
template <typename T>
vec3<T> vec3<T>::operator/(const int &otherInt) {
	vec3 vecDouble(0.0);
	
	vecDouble.a = this->a / otherInt;
	vecDouble.b = this->b / otherInt;
	vecDouble.c = this->c / otherInt;
	
	return vecDouble;
}

/// Division by Double Operator
/// @param The double to divide the vec3 by
/// @return The divided vec3, this is always vec3<double>
template <typename T>
vec3<T> vec3<T>::operator/(const double &otherDouble) {
	vec3 vecDouble(0.0);
	
	vecDouble.a = this->a / otherDouble;
	vecDouble.b = this->b / otherDouble;
	vecDouble.c = this->c / otherDouble;
	
	return vecDouble;
}

/// Addition Operator
/// @param The vec3 to add to this vec3
/// @return The added vec3
template <typename T>
vec3<T> vec3<T>::operator+(const vec3<T> &otherVec) {
	vec3 vecDouble(0.0);
	
	vecDouble.a = this->a + otherVec.a;
	vecDouble.b = this->b + otherVec.b;
	vecDouble.c = this->c + otherVec.c;
	
	return vecDouble;
}

/// Subtraction Operator
/// @param The vec3 to subtract from this vec3
/// @return The subtracted vec3
template <typename T>
vec3<T> vec3<T>::operator-(const vec3<T> &otherVec) {
	vec3 vecDouble(0.0);
	
	vecDouble.a = this->a - otherVec.a;
	vecDouble.b = this->b - otherVec.b;
	vecDouble.c = this->c - otherVec.c;
	
	return vecDouble;
}





// Vector 2
template <typename T>
class vec2 {
private:
	T a;
	T b;
	
public:
	// Constructors
	vec2(); // Default Constructor
	vec2(T a, T b); // Full Constructor
	vec2(T ab); // Single Constructor: Uses the one parameter for all 2 Components

	// Component Access Operator
	T operator[](int index); // Return item 1:a or 2:b, otherwise out of bounds error

	// Vector-Constant Operations
	vec2<T> operator*(const int &otherInt);
	vec2<T> operator*(const float &otherFloat);
	vec2<T> operator/(const int &otherInt);
	vec2<T> operator/(const float &otherFloat);
	
	// Inter-Vector Operations
	vec2<T> operator+(const vec2<T> &otherVec);
	vec2<T> operator-(const vec2<T> &otherVec);
	
	float magnitude(); // Return the Magnitude of this vec2
	vec2<T> normalize(); // Return the Unit Vector of this vec2
	float dot(const vec2<T> &otherVec); // Return this vec2 dotted with the parameter vec2
	vec2<T> cross(const vec2<T> &otherVec); // Return this vec2 crossed with the parameter vec2
	
};

#endif