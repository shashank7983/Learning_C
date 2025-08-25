#include<stdio.h>

int main(){
    printf("given length and breadth of the rectangle \n");
    int length, breadth;
    scanf("%d %d" ,&length,&breadth);
    int area=length*breadth;
    int perimeter=2*(length+breadth);
    printf("the area is: %d",area);
    printf("the perimeter is: %d",perimeter);
    return 0;
}