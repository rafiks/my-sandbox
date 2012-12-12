#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);
void draw_a_card();
int select_next_available(int n);

char *suits[4] =  {"hearts", "diamonds", "spades", "clubs"};
char *ranks[13] = {"ace", "two", "three", "four", "five",
                 "six", "seven", "eight", "nine",
                 "ten", "jack", "queen", "king" };

int card_drawn[52];
int cards_remaining = 52;

int main() {
    int n, i;

    srand(time(NULL));      // Set seed for random numbers.

    while (1) {
        cout << "Enter no. of cards to draw (0 to exit): ";
        cin >> n;
        if (n == 0)
            break;
        for (i = 1; i <= n; i++)
            draw_a_card();
    }
    return 0;
}

// Draw-a-card function
// Performs one card-draw by getting a random 0-4 and a random
//  0-12. These are then used to index the string arrays, ranks
//  and suits.
//
void draw_a_card() {
    int r;         // Random index (0 thru 12) into ranks array
    int s;         // Random index (0 thru 3) into suits array
    int n, card;

    n = rand_0toN1(cards_remaining--);
    card = select_next_available(n);
    r = card % 13;            // r = random 0 to 12
    s = card / 13;            // s = random 0 to 3
    cout << ranks[r] << " of " << suits[s] << endl;
}

// Select-next-available-card function.
// Find the Nth element of card_drawn, skipping over all those
//  elements already set to true. 
//
int select_next_available(int n) {
    int i = 0;

    // At beginning of deck, skip past cards already drawn.

    while (card_drawn[i])
        i++;

    while (n-- > 0) {     // Do the following n times:
        i++;                       // Advance to next card
        while (card_drawn[i])      // Skip past cards
            i++;                   //  already drawn.
    }
    card_drawn[i] = true;        // Note card to be drawn
    return i;                    // Return this number.
}

// Random 0-to-N1 Function.
// Generate a random integer from 0 to N-1.
//
int rand_0toN1(int n) {
    return rand() % n;
}
