#include "functions.h"

void welcome_player(void)
{
    printf("Welcome to Blackjack!\n");
    printf("Skip rules? (y/n)");
    char answer = getchar();
    if (tolower(answer) == 'n')
    {
        printf("The rules are simple: \n"
               "You get 2 cards. You can see one of the dealers' cards. "
               "The objective is to get 21 points. The value of cards from "
               "2 to 10 is obvious. Face cards are worth 10. Aces are worth either "
               "1 or 11 points, depending on if it being 11 makes you lose.\n"
               "You have to options:\n"
               "Hit: Take another card, which could lead to a loss if "
               "your total after taking that card is bigger than 21.\n"
               "Stay: Don't do anything and wait for the dealer"
               "to play.\n ");
    }
}