//calculate the area of a triangle
#include <iostream>
#include <cmath>
int main() {
	double x[3],y[3];
	for (int i=0;i<3;i++)
		std::cin >> x[i] >> y[i];
  	double a[3]; // side by triangle
	for (int i=0;i<3;i++)
		a[i] = sqrt(pow(x[i]-x[(i+1)%3],2)+pow(y[i]-y[(i+1)%3],2));
	double p = (a[0]+a[1]+a[2])/2;
	double area = sqrt(p*(p-a[0])*(p-a[1])*(p-a[2]));
	if (a[0]*a[1]*a[2]*area != 0) 
		std::cout<< area;
	else
		std::cout<<"this triangle doesn't exist (area = 0)";
	return 0;
}