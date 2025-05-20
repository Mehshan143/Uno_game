// #include "deck.h"
// #include <vector>
// #include <algorithm>
// #include <random>
// #include <ctime>

// namespace UNO {

//     class Deck {
//     private:
//         std::vector<Card> cards;
//         std::vector<Card> discardPile;
//         std::default_random_engine rng;

//     public:
//         Deck();

//         void initializeDeck();
//         void shuffleDeck();

//         std::vector<Card> drawInitialHand(int count = 6);
//         std::vector<Card> drawCards(int count);

//         void reverseDirection(bool& isClockwise);
//         void skipTurn(bool& skipNext);

//         bool hasPlayableCard(const std::vector<Card>& hand, const Card& topCard);
//         Card drawFromDeckZone();

//         void placeInDiscardPile(const Card& card);
//         const Card& getTopOfDiscardPile() const;
//     };

// }

// #endif


// #include "Deck.h"

// using namespace UNO;

// Deck::Deck() {
//     rng.seed(static_cast<unsigned>(std::time(nullptr)));
//     initializeDeck();
//     shuffleDeck();
// }

// void Deck::initializeDeck() {
//     cards.clear();
//     discardPile.clear();

//     Color colors[] = { Color::Red, Color::Green, Color::Blue, Color::Yellow };

//     // Number and action cards
//     for (Color color : colors) {
//         for (int v = static_cast<int>(Value::Zero); v <= static_cast<int>(Value::DrawTwo); ++v) {
//             Value value = static_cast<Value>(v);
//             cards.emplace_back(color, value);  // One copy of Zero
//             if (value != Value::Zero) {
//                 cards.emplace_back(color, value);  // Two copies of other values
//             }
//         }
//     }

//     // Wild cards
//     for (int i = 0; i < 4; ++i) {
//         cards.emplace_back(Color::Wild, Value::Wild);
//         cards.emplace_back(Color::Wild, Value::WildDrawFour);
//     }
// }

// void Deck::shuffleDeck() {
//     std::shuffle(cards.begin(), cards.end(), rng);
// }

// std::vector<Card> Deck::drawInitialHand(int count) {
//     return drawCards(count);
// }

// std::vector<Card> Deck::drawCards(int count) {
//     std::vector<Card> hand;
//     for (int i = 0; i < count && !cards.empty(); ++i) {
//         hand.push_back(cards.back());
//         cards.pop_back();
//     }
//     return hand;
// }

// void Deck::reverseDirection(bool& isClockwise) {
//     isClockwise = !isClockwise;
// }

// void Deck::skipTurn(bool& skipNext) {
//     skipNext = true;
// }

// bool Deck::hasPlayableCard(const std::vector<Card>& hand, const Card& topCard) {
//     for (const Card& card : hand) {
//         if (card.isPlayableOn(topCard)) {
//             return true;
//         }
//     }
//     return false;
// }

// Card Deck::drawFromDeckZone() {
//     if (cards.empty()) {
//         // Reshuffle discard pile into deck
//         if (!discardPile.empty()) {
//             Card top = discardPile.back();
//             discardPile.pop_back();
//             cards = discardPile;
//             discardPile.clear();
//             shuffleDeck();
//             discardPile.push_back(top);
//         }
//     }

//     Card card = cards.back();
//     cards.pop_back();
//     return card;
// }

// void Deck::placeInDiscardPile(const Card& card) {
//     discardPile.push_back(card);
// }

// const Card& Deck::getTopOfDiscardPile() const {
//     return discardPile.back();
// }
