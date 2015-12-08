#include "Header.h"



template <typename T, const unsigned int SIZE>
double Point<T, SIZE>::distance(const Point & p) const {
	double result;
	for (int i = 0; i < SIZE; i++) {
		result += std::pow(components_[i] - p.components_[i], 2)
	}
	return std::sqrt(result);
}

template <typename T, const unsigned int SIZE>
bool Point<T, SIZE>::operator>(const Point & p) {
	Point ZERO;
	if (distance(ZERO) > p.distance(ZERO))
		return true;
	else
		return false;
}

std::ostream &


int main() {
	
	return 0;
}
