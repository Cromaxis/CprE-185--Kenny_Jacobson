//Author: Kenneth A. Jacobson
//CprE 185 Homework 10
//30.11.2017

#include <stdio.h>
#include <math.h>

struct point{
  float x, y;
};
typedef struct point point_t;

struct triangle{
  point_t a, b, c;
};
typedef struct triangle triangle_t;

void read_triangle(triangle_t, point_t, point_t, point_t);
void print_triangle(triangle_t);
triangle_t translate_triangle_xdir(triangle_t, float);
triangle_t translate_triangle_ydir(triangle_t, float);
void compare_perimeter_triangle(triangle_t, triangle_t);
float perimeter(triangle_t);
float line(point_t, point_t);

void main(void){
  triangle_t triangle_a;
  triangle_t triangle_b;
  point_t a, b, c;
  float move;

  printf("What is the first x coordinate in the triangle A? ");
    scanf("%f", &a.x);
  printf("What is the first y coordinate in the triangle A? ");
    scanf("%f", &a.y);
  printf("What is the second x coordinate in the triangle A? ");
    scanf("%f", &b.x);
  printf("What is the second y coordinate in the triangle A? ");
    scanf("%f", &b.y);
  printf("What is the third x coordinate in the triangle A? ");
    scanf("%f", &c.x);
  printf("What is the third y coordinate in the triangle A? ");
    scanf("%f", &c.y);

  read_triangle(triangle_a, a, b, c);

  printf("What is the first x coordinate in the triangle B? ");
    scanf("%f", &a.x);
  printf("What is the first y coordinate in the triangle B? ");
    scanf("%f", &a.y);
  printf("What is the second x coordinate in the triangle B? ");
    scanf("%f", &b.x);
  printf("What is the second y coordinate in the triangle B? ");
    scanf("%f", &b.y);
  printf("What is the third x coordinate in the triangle B? ");
    scanf("%f", &c.x);
  printf("What is the third y coordinate in the triangle B? ");
    scanf("%f", &c.y);

  read_triangle(triangle_b, a, b, c);

  print_triangle(triangle_a);
  print_triangle(triangle_b);

  printf("How far to the left or right would you like to move triangle A? ");
    scanf("%f", &move);
    triangle_a = translate_triangle_xdir(triangle_a, move);
  printf("How far up or down?");
    scanf("%f", &move);
    triangle_a = translate_triangle_ydir(triangle_a, move);
  printf("How far to the left or right would you like to move triangle B? ");
    scanf("%f", &move);
    triangle_b = translate_triangle_xdir(triangle_b, move);
  printf("How far up or down?");
    scanf("%f", &move);
    triangle_b = translate_triangle_ydir(triangle_b, move);


}

void read_triangle(triangle_t tri, point_t a, point_t b, point_t c){
  tri.a.x = a.x;   tri.a.y = a.y;
  tri.b.x = b.x;   tri.b.y = b.y;
  tri.c.x = c.x;   tri.c.y = c.y;
}

void print_triangle(triangle_t tri){
  printf("This triangle is defined by the points: (%.2f, %.2f), (%.2f, %.2f) and, (%.2f, %.2f)\n"
    , tri.a.x, tri.a.y, tri.b.x, tri.b.y, tri.c.x, tri.c.y);

}

triangle_t translate_triangle_xdir(triangle_t tri, float n){
  tri.a.x += n;
  tri.b.x += n;
  tri.c.x += n;

  return tri;
}

triangle_t translate_triangle_ydir(triangle_t tri, float n){
  tri.a.y += n;
  tri.b.y += n;
  tri.c.y += n;

  return tri;
}

void compare_perimeter_triangle(triangle_t tri_a, triangle_t tri_b){
  float perimeter_a = perimeter(tri_a);
  float perimeter_b = perimeter(tri_b);

  if(perimeter_a > perimeter_b){
    printf("The triangle A is larger than the second\n");
  }
  else if(perimeter_a < perimeter_b){
    printf("The triangle A is smaller than the second\n");
  }
  else{
    printf("The two triangles are the same size\n");
  }
}

float perimeter(triangle_t tri){
  float ab = line(tri.a, tri.b);
  float bc = line(tri.b, tri.c);
  float ac = line(tri.a, tri.c);

  return ab+ bc+ ac;
}

float line(point_t a, point_t b){
  return sqrt(pow(fabs(a.x - b.x), 2.0) + pow(fabs(a.y - b.y), 2.0));
}
