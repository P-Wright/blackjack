#include "BlackJack.hpp"

std::string Card::printCard() const {
    std::string output("");

    switch(cardRank) {
        case RANK_2: 
            output += "2";
            break;

        case RANK_3: 
            output += "3";
            break;

        case RANK_4: 
            output += "4";
            break;
        case RANK_5: 
            output += "5";
            break;
        case RANK_6: 
            output += "6";
            break;
        case RANK_7: 
            output += "7";
            break;
        case RANK_8: 
            output += "8";
            break;
        case RANK_9: 
            output += "9";
            break;

        case RANK_JACK: 
            output += "J";
            break;
        case RANK_QUEEN: 
            output += "Q";
            break;
 
        case RANK_KING: 
            output += "K";
            break;
       
        case RANK_ACE: 
            output += "A";
            break;
 
 
    }

    switch(cardSuit) {
        case SUIT_HEART:
            output += "H";
            break;
        
        case SUIT_SPADE:
            output += "S";
            break;

        case SUIT_DIAMOND:
            output += "D";
            break;

        case SUIT_CLUB:
            output += "C";
            break;

    }
    
    return output;

}