#include "point.h"
#include <stdio.h>

int main(void)

{
  Point food_points[POINTS_LENGTH] = FOOD_POINTS;
  int food_points_length = POINTS_LENGTH;
  Point organism_location;
  Point closest_food_location;

  printf("Enter your position:");
  NEW_LINE;
  printf("x:");
  scanf("%d", &organism_location.x);
  printf("y:");
  scanf("%d", &organism_location.y);

  get_closest_food(food_points, food_points_length, organism_location, &closest_food_location);

  printf("Closest food target is x:%d y:%d", closest_food_location.x, closest_food_location.y);

  return 0;
}