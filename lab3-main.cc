#include <iostream>
using namespace std;
// Enum for card suits
enum SuitType {
    HEARTS,
    CLUBS,
    DIAMONDS,
    SPADES
};

// Struct for card type
struct CardType {
    int rank;
    SuitType suit;
};

// Function to print a card
void PrintCard(CardType card) {
    if (card.rank >= 1 && card.rank <= 13) {
        // Valid rank, convert and print
        const char* ranks[] = {"", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
        const char* suits[] = {"H", "C", "D", "S"};

        cout << ranks[card.rank] << suits[card.suit] <<endl;
    } else {
        // Invalid rank
        cout << "[Illegal Rank]" << char(card.suit) << endl;
    }
}

int main() {

    CardType myCard1, myCard2, myCard3, myCard4;

    myCard1.rank = 2;
    myCard1.suit = HEARTS;
    PrintCard(myCard1);

    myCard2.rank = 11;
    myCard2.suit = CLUBS;
    PrintCard(myCard2);

    myCard3.rank = 1;
    myCard3.suit = DIAMONDS;
    PrintCard(myCard3);    

    myCard4.rank = 1333333;
    myCard4.suit = DIAMONDS;
    PrintCard(myCard4); 

    // Everything is okay
    return 0;
}