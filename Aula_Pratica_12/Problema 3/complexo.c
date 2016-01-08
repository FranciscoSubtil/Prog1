/*
 *      Author: Fábio Gaspar
 */
#include <stdio.h>
#include <math.h>
#include "complexo.h"

complexo leComplexo()
{
	scanf("%d %d", complexo.real, complexo.img);
	return complexo;
}

void escreveComplexo(complexo c)
{
	printf("%d + i%d", c.real, c.img);
}

complexo somaComplexo(complexo c1, complexo c2)
{
	complexo c;

	c.real = c1.real + c2.real;
	c.img = c1.img + c2.img;

	return c;
}

double modComplexo(complexo c)
{
	/*
	seja z = x + yi
	|z|= sqrt(x² + y²)
	*/

	return sqrt(pow(x,2)+pow(y,2));
}

double argComplexo(complexo c)
{
	/*
	seja z = x + yi
	arg(z) = 'teta', tal que cos('teta') = x/|z| e sin('teta') = y/|z|
	então, arg(z) = arccos(x/|z|) = arcsin(y/|z|)
	*/

	return acos(c.real / modComplexo(c));
}
