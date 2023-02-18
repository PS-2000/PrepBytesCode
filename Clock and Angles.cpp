#include <iostream>
using namespace std;

// Function to compute the angle between hour and minute hand
int findAngle(int hour, int min)
{
	// find position of hour's hand
	int h = (hour * 360) / 12 + (min * 360) / (12 * 60);

	// find position of minute's hand
	int m = (min * 360) / (60);

	// calculate the angle difference
	int angle = abs(h - m);

	// consider shorter angle and return it
	if (angle > 180)
		angle = 360 - angle;

	return angle;
}

// Clock Angle Problem
int main()
{
  int t;
  cin>> t ;
  while(t--)
  {
	int hour;
	int min;
	cin>> hour >> min;

	cout << findAngle(hour, min)<< "\n";
}
	return 0;
}
