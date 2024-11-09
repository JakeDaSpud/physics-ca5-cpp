#include "jector.h"
#include <iostream>

int main() {
	std::cout << "working!!!\n";
	
	vec3 a = vec3(1, 2, 3);
	std::cout << a[1] << ", " << a[2] << ", " << a[3] << '\n';
	
	vec3 b = vec3(3, 2, 1);
	std::cout << b[1] << ", " << b[2] << ", " << b[3] << '\n';
	
	vec3 c = a - b;
	std::cout << c[1] << ", " << c[2] << ", " << c[3] << '\n';
	
	
	return 0;
}