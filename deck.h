// // #ifndef DECK_H
// // #define Deck_H
// // #include <string>
// // #include <iostream>
// // namespace DECK{
// //     class deck{
// //         private:
// //         const int totalCards;
// //         int cardCount;
// //         public:
// //         void shuffle();



// //     };
// // }
// // #endif


// #ifndef DECK_H
// #define DECK_H

// #include <vector>
// #include <random>
// #include <algorithm>
// #include <chrono>

// namespace Deck {

// class Deck {
// private:
//     std::vector<Deck> cards;
//     std::vector<Deck> discardPile;

// public:
//     Card() { initialize(); }

//     void initialize();      // Populate deck
//     void shuffle();         // Shuffle cards
//     Card draw();            // Draw one card
//     void discard(const Card& card);
//     const Card& topDiscard() const;
//     bool isEmpty() const;

//     // Action card handlers
//     void handleDrawTwo(std::vector<Player>& players, int& currentIndex, int direction);
//     void handleSkip(int& currentIndex, int direction, int numPlayers);
//     void handleReverse(int& direction);
//     void handleWildChangeColor(Card& card, Color chosenColor);
//     void handleWildDrawFour(std::vector<Player>& players, int& currentIndex, int direction, int numPlayers, Card& card, Color chosenColor);
// };

// } // namespace UNO

// #endif
