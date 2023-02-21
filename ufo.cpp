#include <iostream>
#include "ufo_functions.hpp"
using namespace std;

int main()
{
  greet();

  string codeword = "codecademy";
  string answer = "__________";

  int misses = 0;

  vector<char> incorrect;
  bool guess = false;

  while (answer != codeword && misses < 7)
  {
    display_misses(misses);
    display_status(incorrect, answer);

    misses++;
  }

  end_game(answer, codeword);
}
