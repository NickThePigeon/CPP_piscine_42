#include "Point.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
}

Point::Point(float x, float y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point &other)
{
	this->x = other.x;
	this->y = other.y;
	return ;
}

Point::~Point()
{
	return ;
}