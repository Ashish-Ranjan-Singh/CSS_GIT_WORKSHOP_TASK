#include "include/utils.h"
#include <stdio.h>

int main() {
    printf("Area of rectangle having length 8 and breadth 6 is:%lf\n",area_rectangle(8.0,6.0));
    printf("Perimeter of circle having radius 14 is:%lf\n",perimeter_circle(14.0) );
    printf("Perimeter of rectangle having length 10 and breadth 9 is:%lf\n",perimeter_rectangle(10,9));
    printf("Volume of cylinder having radius 7 and height 14 is:%lf\n",volume_cylinder(7,14));
    printf("Volume of sphere having radius 28 is:%lf\n",volume_sphere(28));
    printf("Volume of cube having side 17 is:%lf\n",volume_cube(17));
    printf("Volume of cone having radius 11 and height 23 is:%lf\n",volume_cone(11,13));
    printf("Volume of pyramid having side 15 and height 27 is:%lf\n",volume_pyramid(15,27));
    printf("Surface area of cylinder having radius 8 and height 19 is:%lf\n",surface_area_cylinder(8,19));
    return 0;
}
