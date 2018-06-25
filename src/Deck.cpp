#include "Deck.hpp"

Deck::Deck() {

    auto cardIndex = cards.begin();
    for(int rank = 0; rank < Card::MAX_RANK; rank++)
    {
        for(int suit = 0;suit < Card::MAX_SUIT; suit++)
        {
            *cardIndex = Card(static_cast<Card::Rank>(rank), static_cast<Card::Suit>(suit));
            cardIndex++;
        }
        
    }
    
}

std::string Deck::printDeck() const{
    std::string output;
    for(auto& currentCard : cards)
    {
        output += currentCard.printCard();
    }
    return output;

}   