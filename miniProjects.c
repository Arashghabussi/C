#include <stdio.h>

// Q2
void
monthFinder ()
{
  printf ("\n");
  printf ("Q2 ");
  int month;
  printf ("Input Month No : ");
  scanf ("%d", &month);
  switch (month)
    {
    case 1:
      printf ("January\n");
      break;
    case 2:
      printf ("February\n");
      break;
    case 3:
      printf ("March\n");
      break;
    case 4:
      printf ("April\n");
      break;
    case 5:
      printf ("May\n");
      break;
    case 6:
      printf ("June\n");
      break;
    case 7:
      printf ("July\n");
      break;
    case 8:
      printf ("August\n");
      break;
    case 9:
      printf ("September\n");
      break;
    case 10:
      printf ("October\n");
      break;
    case 11:
      printf ("November\n");
      break;
    case 12:
      printf ("December\n");
      break;
    default:
      printf ("DID NOT FOUND THAT MONTH ON EARTH \n");
      break;
    }
}

// Q3
void
Triangle ()
{
  printf ("\n");
  printf ("Q3 ");
  for (int i = 10; i > 0; i--)
    {
      for (int j = i; j < 10; j++)
    {
      printf ("*");
    }
      printf ("\n");
    }
}

// Q4
void
factorialFinder ()
{
  printf ("\n");
  printf ("Q4 ");
  int target;
  printf ("Input For Factorial: ");
  scanf ("%d", &target);

  int fac = 1;
  for (int i = 1; i <= target; i++)
    {
      fac = fac * i;
    }
  printf ("%d", fac);
}

// Q5
void
allSumFinder ()
{
  int sum = 0;
  printf ("\n");
  printf ("Q5 ");
  long int target;
  printf ("Input For All Sum Finder: ");
  scanf ("%ld", &target);

  while (target > 0)
    {
      int digit = target % 10;
      sum = sum + digit;
      target /= 10;
    }
  printf ("%d", sum);
}

// Q6
void
greatestCommonDivisor ()
{
  int number1, number2;
  int answer;
  printf ("\n");
  printf ("Q6 ");
  printf ("(GCD) Enter two inputs: ");
  scanf ("%d %d", &number1, &number2);

  for (int index = 1; index <= number1 && index <= number2; ++index)
    {
      if (number1 % index == 0 && number2 % index == 0)
    {
      answer = index;
    }
    }
  printf ("Greatest Common Divisor of %d & %d is %d", number1, number2,
      answer);
}

// Main
int
main (int argc, char **argv)
{
  // Q1: Only if T is greater than 32 but smaller than 212
  printf ("\n");
  printf ("Q1: Only if T is greater than 32 but smaller than 212");
  printf ("\n");
  // Q2
  monthFinder ();
  // Q3
  Triangle ();
  // Q4
  factorialFinder ();
  // Q5
  allSumFinder ();
  // Q6
  greatestCommonDivisor ();
}


