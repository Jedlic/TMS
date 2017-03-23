#include "TMO.h"
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
#include <math.h>

class TMOAncuti16: public TMO  
{
public:
	TMOAncuti16();
	virtual ~TMOAncuti16();
	virtual int Transform();
	virtual double getSum(int i, int j, float kernel[3][3], double* colorChannel, int l, int k);
	virtual double getLaplacianMean(int i, int j, double* laplacianOfColor, int  w);

protected:
	TMODouble dParameter;
};