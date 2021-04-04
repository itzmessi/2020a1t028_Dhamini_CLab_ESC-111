#include<stdio.h>

int area(int a, int b) {
   int area = a * b;
   return area;
}

int perimeter(int a, int b){
   int perimeter = 2*(a + b);
   return perimeter;
}
int main(){
   int length= 20;
   int breadth = 30;
   printf("area of rectangle is : %d\n",area(length,breadth));
   printf("perimeter of rectangle is : %d",perimeter(length, breadth));
   return 0;
}