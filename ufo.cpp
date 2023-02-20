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

    cout << "\nIncorrect Guesses:\n";

    for (int i = 0; i < incorrect.size(); i++)
    {
      cout << incorrect[i] << ' ';
    }

    cout << "\nCodeword:\n";

    for (int i = 0; i < answer.size(); i++)
    {
      cout << answer[i] << ' ';
    }

    misses++;
  }

  end_game(answer, codeword);
}
