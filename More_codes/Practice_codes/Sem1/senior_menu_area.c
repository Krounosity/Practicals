#include<stdio.h>
#include<math.h>
void exiter();
void repeater();
void sphere(){
    float radius;
    printf("For sphere:\n Enter the radius of the sphere: ");
    scanf("%f",&radius);
    printf("The area of the circle is: %f\n",(4*22*radius*radius)/7);
    repeater();
}
void cone(){
    float radius, height;
    printf("For cone:\n Enter the radius and height of the cone base separated by spaces: ");
    scanf("%f %f",&radius,&height);
    printf("The area of the cone is: %f\n",((22)*radius*(radius+pow(((height*height)+(radius*radius)),0.5)))/7);
    repeater();
}
void cube(){
    float side;
    printf("For cube:\n Enter the side of the cube: ");
    scanf("%f",&side);
    printf("The area of the cube is: %f\n",(6*side*side));
    repeater();
}
void cuboid(){
    float l,b,h;
    printf("For cuboid:\n Enter the length, breadth and height of the cuboid separated by spaces: ");
    scanf("%f %f %f",&l,&b,&h);
    printf("The area of the cuboid is: %f\n",l*b*h);
    repeater();
}
void cylinder(){
    float height, radius;
    printf("For cylinder:\n Enter the radius and height of the cylinder separated by spaces: ");
    scanf("%f %f",&radius,&height);
    printf("The area of the cylinder is: %f\n",((44*radius*(height+radius))/7));
    repeater();
}
void assigner(){
    int choice;
    printf("Which shape's total surface area do you want to find out?:\n1)Sphere\n2)Cone\n3)Cube\n4)Cuboid\n5)Cylinder\n6)Exit.\n  -->");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            sphere();
            break;
        case 2:
            cone();
            break;
        case 3:
            cube();
            break;
        case 4:
            cuboid();
            break;
        case 5:
            cylinder();
            break;
        default:
            exiter();
    }
}
void repeater(){
    int repeat;
    printf("Do you want to repeat?\n 0 for no\n 1 for yes\n-->");
    scanf("%d",&repeat);
    if(repeat==0){
        exiter();
    }else{
        assigner();
    }
}
void exiter(){
    printf("Thank you!\n");
}
int main(){
    assigner();
    return 0;
}