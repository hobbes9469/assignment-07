#ifndef POINT_H
#define POINT_H
// ----------------------------------------------------------------------------

template <typename T, const unsigned int SIZE>
class Point {
	private:
		T components_[SIZE];

	public:
		Point();
		
		double distance(const Point & p) const;

	
};


template <typename T, const unsigned int SIZE>
Point<T, SIZE>::Point() : components_{} {};



// ----------------------------------------------------------------------------
#endif  // POINT_H
