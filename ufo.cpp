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

  char letter;

  while (answer != codeword && misses < 7)
  {
    display_misses(misses);
    display_status(incorrect, answer);

    cout << "\n\nPlease enter your guess: ";
    cin >> letter;

    misses++;
  }

  end_game(answer, codeword);
}
