#include "point.h"
#include <stdio.h>

int main(void)

{
  Point food_points[5] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  int food_points_length = 5;
  Point organism_location;
  Point closest_food;

  printf("Enter your position:");
  NEW_LINE;
  printf("x:");
  scanf("%d", &organism_location.x);
  printf("y:");
  scanf("%d", &organism_location.y);

  get_closest_food(food_points, food_points_length, organism_location, &closest_food);

  printf("Closest food target is x:%d y:%d", closest_food.x, closest_food.y);

  return 0;
}