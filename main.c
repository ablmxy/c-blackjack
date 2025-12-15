#include <ctype.h>
#include <stdio.h>

const char *cards[] = {
    "2", "3", "4", "5", "6", "7", "8",
    "9", "10", "J", "Q", "K", "A"
};
const char suits[] = {'C', 'S', 'H', 'D'};
const int values[] = {
    2, 3, 4, 5, 6, 7, 8,
    9, 10, 10, 10, 10, 11
};

int main(void)
{
    printf("Welcome to Blackjack!\n");
    printf("Skip rules? (y/n)");
    char answer = getchar();
    if (tolower(answer) == 'y')
    {
        printf("The rules are simple: \n"
               "You get 2 cards. You can see one of the dealers' cards. "
               "The objective is to get 21 points. The value of cards from "
               "2 to 10 is obvious. Face cards are worth 10. Aces are worth either "
               "1 or 11 points, depending on if it being 11 makes you lose.");
    }

}