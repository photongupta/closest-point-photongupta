#include "point.h"
#include <math.h>

double find_distance_between(Point point1, Point point2)
{
  return sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  double distance;
  double closest_food_distance = find_distance_between(food_points[0], current_location);
  *closest_food_location = food_points[0];

  for (int index = 0; index < points_length; index++)
  {
    distance = find_distance_between(food_points[index], current_location);

    if (closest_food_distance > distance)
    {
      closest_food_distance = distance;
      *closest_food_location = food_points[index];
    }
  }
}