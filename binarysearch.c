#include <stdio.h>

// assumes data is sorted

findMidPoint(min, max)
{
  return (min + max)/2;
}


binarySearch(key, array[], min, max)

if (max < min)
{
  return -1;
}
else
{
  midpoint = findMidPoint(min,max);

  if (array[midpoint] < key)
  {
    binarySearch(key, array, midpoint + 1, max);
  }
  else if (array[midpoint] > key)
  {
    binarySearch(key, array, min, midpoint - 1);
  }
  else
  {
    return midpoint;
  }
}
