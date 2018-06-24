#include "BlackJack.hpp"
#include "gtest/gtest.h"

namespace {
 
    TEST(BlackJack, CardQHCreateTest) {
        std::string output;
        const Card card(Card::RANK_QUEEN, Card::SUIT_HEART);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "QH");
    }

    TEST(BlackJack, CardQCCreateTest) {
        std::string output;
        const Card card(Card::RANK_QUEEN, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "QC");
    }

    TEST(BlackJack, CardQDCreateTest) {
        std::string output;
        const Card card(Card::RANK_QUEEN, Card::SUIT_DIAMOND);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "QD");
    }

    TEST(BlackJack, CardQSCreateTest) {
        std::string output;
        const Card card(Card::RANK_QUEEN, Card::SUIT_SPADE);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "QS");
    }

    TEST(BlackJack, Card2CCreateTest) {
        std::string output;
        const Card card(Card::RANK_2, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "2C");
    }

    TEST(BlackJack, Card3CCreateTest) {
        std::string output;
        const Card card(Card::RANK_3, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "3C");
    }

    TEST(BlackJack, Card4CCreateTest) {
        std::string output;
        const Card card(Card::RANK_4, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "4C");
    }


    TEST(BlackJack, Card5CCreateTest) {
        std::string output;
        const Card card(Card::RANK_5, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "5C");
    }

    TEST(BlackJack, Card6CCreateTest) {
        std::string output;
        const Card card(Card::RANK_6, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "6C");
    }

    TEST(BlackJack, Card7CCreateTest) {
        std::string output;
        const Card card(Card::RANK_7, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "7C");
    }

    TEST(BlackJack, Card8CCreateTest) {
        std::string output;
        const Card card(Card::RANK_8, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "8C");
    }

    TEST(BlackJack, Card9CCreateTest) {
        std::string output;
        const Card card(Card::RANK_9, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "9C");
    }

    TEST(BlackJack, CardJCCreateTest) {
        std::string output;
        const Card card(Card::RANK_JACK, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "JC");
    }

    TEST(BlackJack, CardKCCreateTest) {
        std::string output;
        const Card card(Card::RANK_KING, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "KC");
    }

    TEST(BlackJack, CardACCreateTest) {
        std::string output;
        const Card card(Card::RANK_ACE, Card::SUIT_CLUB);
        
        output = card.printCard();
        
        ASSERT_EQ(output, "AC");
    }


}