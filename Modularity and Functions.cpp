
#include <iostream>
using namespace std;

float CalcDistance(float point1x, float point1y, float point2x, float point2y)
{
	float xdistance = point2x - point1x;
	xdistance = xdistance * xdistance;

	float ydistance = point2y - point1y;
	ydistance = ydistance * ydistance;

	float distance = xdistance + ydistance;
	distance = sqrt(distance);

	cout << endl << "The radius of the circle is " << distance << "." << endl;
	return distance;
}

float CalcRadius()
{
	float oldx;
	float newx;
	float oldy;
	float newy;

	cout << "What is the x of the center of the circle? ";
	cin >> oldx;
	cout << endl << "What is the y of the center of the circle? ";
	cin >> newx;
	cout << endl << "What is the x of the end of the circle? ";
	cin >> oldy;
	cout << endl << "What is the y of the end of the circle? ";
	cin >> newy;
	return CalcDistance(oldx, newx, oldy, newy);
}

float CalcCircumference()
{
	float distance;
	cout << endl << "Input the radius of the circle to find the circumference. ";
	cin >> distance;
	float circumference = distance * 2 * 3.1416;
	cout << endl << "The circumference of the circle is " << circumference << endl;
	return circumference;
}

float CalcArea()
{
	float distance;
	cout << endl << "Input the radius of the circle to find the area. ";
	cin >> distance;
	float area = distance * 3.1416;
	area = area * area;
	cout << endl << "The area of the circle is " << area;
	return area;
}

int main()
{
	CalcRadius();
	CalcCircumference();
	CalcArea();
}