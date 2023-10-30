// https://www.codewars.com/kata/5601c5f6ba804403c7000004/train/c
typedef struct Point_Coordinates {
    double x;
    double y;
} coords;

coords bar_triang(coords a, coords b, coords c) {
    coords res;
    double x0 = (a.x+ b.x + c.x) / 3.0;
    double y0 = (a.y + b.y + c.y) / 3.0;
    res.x = round(x0*10000) / 10000;
    res.y = round(y0*10000) / 10000;
    
    return res;
}
//
#include <math.h>

typedef struct point {
    double x;
    double y;
} Point;

double round4 (double x) { return round(x * 1e4) / 1e4; }

Point bar_triang (Point a, Point b, Point c)
{
	return (Point) {
		.x = round4((a.x + b.x + c.x) / 3.0),
		.y = round4((a.y + b.y + c.y) / 3.0)
	};
}
