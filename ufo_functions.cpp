#include <iostream>
#include <vector>
using namespace std;

// Function Definitions
void greet()
{
  cout << "=============\n";
  cout << "UFO: The Game\n";
  cout << "=============\n";
  cout << "Instructions: save your friend from alien abduction by guessing the letters in the codeword.\n";
}

void display_misses(int misses)
{

  if (misses == 0 || misses == 1)
  {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     \\        (  Send help! ) \n";
    cout << "             /   0   \\      / `-----------'  \n";
    cout << "            /  --|--  \\    /                 \n";
    cout << "           /     |     \\                     \n";
    cout << "          /     / \\     \\                   \n";
    cout << "         /               \\                   \n";
  }
  else if (misses == 2)
  {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /  0  \\        (  Send help! ) \n";
    cout << "             / --|-- \\      / `-----------'  \n";
    cout << "            /    |    \\    /                 \n";
    cout << "           /    / \\    \\                    \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";
  }
  else if (misses == 3)
  {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /--|--\\        (  Send help! ) \n";
    cout << "             /   |   \\      / `-----------'  \n";
    cout << "            /   / \\   \\    /                \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";
  }
  else if (misses == 3)
  {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /--|--\\        (  Send help! ) \n";
    cout << "             /   |   \\      / `-----------'  \n";
    cout << "            /   / \\   \\    /                \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";
  }
  else if (misses == 4)
  {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /  |  \\        (  Send help! ) \n";
    cout << "             /  / \\  \\      / `-----------' \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";
  }
  else if (misses == 5)
  {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              / / \\ \\        (  Send help! )\n";
    cout << "             /       \\      / `-----------'  \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";
  }
  else if (misses == 6)
  {

    cout << "                 .                            \n";
    cout << "                 |                            \n";
    cout << "              .-\"^\"-.                       \n";
    cout << "             /_....._\\                       \n";
    cout << "         .-\"`         `\"-.                  \n";
    cout << "        (  ooo  ooo  ooo  )                   \n";
    cout << "         '-.,_________,.-'    ,-----------.   \n";
    cout << "              /     \\        (  Send help! ) \n";
    cout << "             /       \\      / `-----------'  \n";
    cout << "            /         \\    /                 \n";
    cout << "           /           \\                     \n";
    cout << "          /             \\                    \n";
    cout << "         /               \\                   \n";
  }
}

void end_game(string answer, string codeword)
{
  if (answer == codeword)
  {
    cout << "Hooray! You saved the person and earned a medal of honor!\n";
  }
  else
  {
    cout << "Oh no! The UFO just flew away with another person!\n";
  }
}

void display_status(vector<char> incorrect, string answer)
{

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
}