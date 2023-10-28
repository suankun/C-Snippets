// https://www.codewars.com/kata/58dced7b702b805b200000be/train/c
typedef struct Point {
    double x;
    double y;
} point;

double distance_between_points(point a, point b) {

    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return sqrt(dx * dx + dy * dy);

}
