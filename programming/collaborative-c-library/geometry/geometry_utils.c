#include "geometry_utils.h"
#define PI 3.14159
#define g 9.8 


double area_rectangle(double length, double width) {
    return length*width;
}

double perimeter_circle(double radius) {
    return 2 * PI * radius;
}

double perimeter_rectangle(double length, double width) {
    return 2 * (length + width);
}

double volume_cylinder(double radius, double height) {
    return PI * radius * radius * height;
}

double volume_sphere(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

double volume_cube(double side) {
    return side * side * side;
}

double volume_cone(double radius, double height) {
    return (1.0 / 3.0) * PI * radius * radius * height;
}

double volume_pyramid(double side, double height) {
    double base_area = side * side; 
    return (1.0 / 3.0) * base_area * height;
}

double surface_area_cylinder(double radius, double height) {
    return 2 * PI * radius * (height + radius);
}