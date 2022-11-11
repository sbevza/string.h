#include <stdio.h>
#include <string.h>
#include "string.h"
#include <errno.h>

int main() {

  char *first  = "13345678901234567890";
  char *second = "12345678901234567891";
  int int_arr1[] = {1,2,3,4};
  int int_arr2[] = {1,2,3,5};
  int result;

  printf( "Compare '%.19s' to '%.19s':\n", first, second );
  result = s21_memcmp( int_arr1, int_arr2, 4);
  if( result < 0 )
    printf( "First is less than second.\n" );
  else if( result == 0 )
    printf( "First is equal to second.\n" );
  else
    printf( "First is greater than second.\n" );

  return 0;
}
