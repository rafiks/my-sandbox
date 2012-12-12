#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <math.h>
using namespace std;

int rand_0toN1(int n);
void draw_a_card();
int select_next_available(int n);

const char *suits[4] ={"hearts", "diamonds", "spades", "clubs"};
const char *ranks[13] ={"ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king"};

int card_drawn[52];
int cards_remaining = 52;

int main(int argc, const char *argv[])
{
  int n, i;
  srand(time(NULL));

  while (1) {
    cout << "Enter number of cards to draw(0 to ";
    cout << "exit): ";
    cin >> n;

    if (n == 0) {
      break;
    }
    for (i = 1; i <= n; i++) {
      draw_a_card();
    }
  }
  return 0;
}

void draw_a_card(){
  int r;
  int s;
  int n, card;

  n = rand_0toN1(cards_remaining--);
  card = select_next_available(n);
  r = card % 13;
  s = card / 13;

  cout << ranks[r] << " of " << suits[s] << endl;
}

int select_next_available(int n){
  int i = 0;

  while(card_drawn[i])
    i++;

  while (n-- >0){
    i++;
    while(card_drawn[i])
      i++;
  }
  card_drawn[i] = true;
  return i;

}

int rand_0toN1(int n){
  return rand() % n;
}
