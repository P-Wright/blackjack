#include <string>
#include "Card.hpp"
#include <array>

class Deck {

private:
    std::array<Card, 52> cards;

public:
    Deck();
    
    std::string printDeck() const;



};