#include <stdio.h>
#include <math.h>
typedef struct point
{
  float x, y;
} Point;
typedef struct polygon
{
  int sides;
  Point p[100];
  float perimeter;
} Polygon;
int input_n();
Point input_point();
void input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon *p);
void output(Polygon p);
int main()
{
  Polygon p;
  p.sides = input_n();
  input_polygon(&p);
  find_perimeter(&p);
  output(p);
  return 0;
}
int input_n()
{
  int n;
  printf("Enter the Number of sides in the polygon\n");
  scanf("%d", &n);
  return n;
}
Point input_point()
{
  Point p;
  scanf("%f %f", &p.x, &p.y);
  return p;
}
void input_polygon(Polygon *p)
{
  int i;
  for (i = 0; i < p->sides; i++)
  {
    printf("Enter the coordinates of point %d (x,y)\n", i + 1);
    p->p[i] = input_point();
  }
}
float find_distance(Point a, Point b)
{
  return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}
void find_perimeter(Polygon *p)
{
  int i;
  p->perimeter = 0;
  for (i = 0; i < p->sides; i++)
    p->perimeter += find_distance(p->p[i], p->p[(i + 1) % p->sides]);
}
void output(Polygon p)
{
  printf("The perimeter of the polynomial is %f", p.perimeter);
}