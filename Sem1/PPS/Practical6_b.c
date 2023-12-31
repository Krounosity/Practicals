#include<stdio.h>
#include<math.h>
float surface_area(float *rad){
    float area = (88*pow(*rad,2))/7;
    return area;
}
float volume(float *rad){
    float volume = (88*pow(*rad,3))/21;
    return volume;
}
int main(){
    float radius;
    printf("Enter the radius of the sphere: ");
    scanf("%f",&radius);
    printf("The surface area of the sphere is %.2lf and the volume of the cube is %.2lf.\n",surface_area(&radius),volume(&radius));
    return 0;
}