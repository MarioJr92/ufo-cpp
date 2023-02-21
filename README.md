# UFO: The Game

UFO: The Game is a console-based guessing game implemented in C++.

## Gameplay
You must save your friend from an alien abduction by guessing the letters in the codeword. The codeword is a string of characters, and you have to guess one character at a time until you can guess the complete codeword. You are allowed a maximum of seven incorrect guesses. Every time you guess an incorrect character, a part of the alien abduction tractor beam appears until the full tractor beam appears, and you lose.

## Usage

1. Clone the repository
2. Compile the program using the C++ compiler.
3. Run the executable.

The following command can be used to compile the program:

`g++ ufo.cpp ufo_functions.cpp -o ufo`

This will create an executable file named "ufo". You can then run the program by typing:

`./ufo`

## Example Output

```
=============
UFO: The Game
=============
Instructions: save your friend from alien abduction by guessing the letters in the codeword.


                 .
                 |
              .-"^"-.
             /_....._\
         .-"`         `"-.
        (  ooo  ooo  ooo  )
         '-.,_________,.-'    ,-----------.
              /     \        (  Send help! )
             /   0   \      / `-----------'
            /  --|--  \    /
           /     |     \
          /     / \     \

Incorrect! The tractor beam pulls the person in further.

Incorrect! The tractor beam pulls the person in further.

Correct!

...

Congratulation! You have saved your friend and won the game!
```

## Implementation Details

### Files

- `ufo.cpp`: This file contains the main function, which handles the game's logic.
- `ufo_functions.hpp`: This file contains the declarations of the functions used in the game.
- `ufo_functions.cpp`: This file contains the definitions of the functions used in the game.

### Functions

- `greet()`: This function prints the game's title and instructions.
- `display_misses(int misses)`: This function displays the current state of the alien abduction tractor beam based on the number of incorrect guesses made by the player.
- `end_game(string answer, string codeword)`: This function displays the game result, whether the player has won or lost, and shows the correct codeword.
- `display_status(vector<char> incorrect, string answer)`: This function displays the player's progress in guessing the codeword and the incorrect guesses made by the player.