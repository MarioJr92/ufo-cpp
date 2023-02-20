#include <iostream>
#include "ufo_functions.hpp"
using namespace std;

int main()
{
  greet();

  string codeword = "codecademy";
  string answer = "__________";

  int misses = 0;

  while (answer != codeword && misses < 7)
  {
    misses++;
  }

  if (answer == codeword)
  {
    cout << "Hooray! You saved the person and earned a medal of honor!\n";
  }
  else
  {
    cout << "Oh no! The UFO just flew away with another person!\n";
  }
}
