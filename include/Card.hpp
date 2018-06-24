#include <string>

class Card {

public:
    enum Rank {
        RANK_2,
        RANK_3,
        RANK_4,
        RANK_5,
        RANK_6,
        RANK_7,
        RANK_8,
        RANK_9,
        RANK_10,
        RANK_JACK,
        RANK_QUEEN,
        RANK_KING,
        RANK_ACE
    };

    enum Suit {
        SUIT_HEART,
        SUIT_CLUB,
        SUIT_DIAMOND,
        SUIT_SPADE
    };


private:
    Rank cardRank;
    Suit cardSuit;

public:
    Card(Card::Rank rank = RANK_2, Card::Suit suit = SUIT_HEART) 
        : cardRank(rank), cardSuit(suit)
    {
    }

    std::string printCard() const;
    int getCardValue() const;

};