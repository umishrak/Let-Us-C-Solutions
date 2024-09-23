/*Program to receive cartesia coordinates (X,Y) of a point and
converting them into polar co ordinatres(r,theta)
Formula r = sqrt(X sqr + Y sqr), theta = tan sqr -1(Y/X)*/

#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, r, theta;

	printf("\nEnter Cartesian co - ordinates x and y: ");
	scanf("%f %f", &x, &y);

	r = sqrt(x * x + y * y);
	theta = atan2(y, x);
	theta = theta * 180 / 3.14;

	printf("r = %f theta = %f", r, theta);

	return 0;
}