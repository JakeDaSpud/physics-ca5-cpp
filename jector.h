#pragma once

// Vector 3
template <typename T>
class vec3 {
	T a;
	T b;
	T c;
	
	// Constructors
	vec3(); // Default Constructor
	vec3(T a, T b, T c); // Full Constructor
	vec3(T abc); // Single Constructor: Uses the one parameter for all 3 Components

	T operator[](int index); // Return item 1:a 2:b or 3:c, otherwise out of bounds error

	// Vector-Constant Operations
	vec3<T> operator*(const int& otherInt);
	vec3<T> operator*(const float& otherFloat);
	vec3<T> operator/(const int& otherInt);
	vec3<T> operator/(const float& otherFloat);
	
	// Inter-Vector Operations
	vec3<T> operator+(const vec3<T>& otherVec);
	vec3<T> operator-(const vec3<T>& otherVec);
	
	vec3<T> normalize(); // Return the Unit Vector of this vec3
	float dot(const vec3<T>& otherVec); // Return this vec3 dotted with the parameter vec3
	vec3<T> cross(const vec3<T>& otherVec); // Return this vec3 crossed with the parameter vec3
	
}

// Vector 2
template <typename T>
class vec2 {
	T a;
	T b;
	
	// Constructors
	vec2(); // Default Constructor
	vec2(T a, T b); // Full Constructor
	vec2(T ab); // Single Constructor: Uses the one parameter for all 2 Components

	T operator[](int index); // Return item 1:a or 2:b, otherwise out of bounds error

	// Vector-Constant Operations
	vec2<T> operator*(const int& otherInt);
	vec2<T> operator*(const float& otherFloat);
	vec2<T> operator/(const int& otherInt);
	vec2<T> operator/(const float& otherFloat);
	
	// Inter-Vector Operations
	vec2<T> operator+(const vec2<T>& otherVec);
	vec2<T> operator-(const vec2<T>& otherVec);
	
	vec2<T> normalize(); // Return the Unit Vector of this vec2
	float dot(const vec2<T>& otherVec); // Return this vec2 dotted with the parameter vec2
	vec2<T> cross(const vec2<T>& otherVec); // Return this vec2 crossed with the parameter vec2
	
}
