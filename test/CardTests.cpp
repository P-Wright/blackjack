#include "Card.hpp"
#include "gtest/gtest.h"

namespace {
 
    TEST(Card, CardQHCreateTest) {
        const Card card(Card::RANK_QUEEN, Card::SUIT_HEART);
        ASSERT_EQ(card.printCard(), "QH");
        ASSERT_EQ(card.getCardValue(), 10);

    }

    TEST(Card, CardQCCreateTest) {
        const Card card(Card::RANK_QUEEN, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "QC");
    }

    TEST(Card, CardQDCreateTest) {
        const Card card(Card::RANK_QUEEN, Card::SUIT_DIAMOND);
        ASSERT_EQ(card.printCard(), "QD");
    }

    TEST(Card, CardQSCreateTest) {
        const Card card(Card::RANK_QUEEN, Card::SUIT_SPADE);
        ASSERT_EQ(card.printCard(), "QS");
    }

    TEST(Card, Card2CCreateTest) {
        const Card card(Card::RANK_2, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "2C");
        ASSERT_EQ(card.getCardValue(), 2);
    }

    TEST(Card, Card3CCreateTest) {
        const Card card(Card::RANK_3, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "3C");
        ASSERT_EQ(card.getCardValue(), 3);
    }

    TEST(Card, Card4CCreateTest) {
        const Card card(Card::RANK_4, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "4C");
        ASSERT_EQ(card.getCardValue(), 4);
    }


    TEST(Card, Card5CCreateTest) {
        const Card card(Card::RANK_5, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "5C");
        ASSERT_EQ(card.getCardValue(), 5);
    }

    TEST(Card, Card6CCreateTest) {
        const Card card(Card::RANK_6, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "6C");
        ASSERT_EQ(card.getCardValue(), 6);
    }

    TEST(Card, Card7CCreateTest) {
        const Card card(Card::RANK_7, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "7C");
        ASSERT_EQ(card.getCardValue(), 7);
    }

    TEST(Card, Card8CCreateTest) {
        const Card card(Card::RANK_8, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "8C");
        ASSERT_EQ(card.getCardValue(), 8);
    }

    TEST(Card, Card9CCreateTest) {
        const Card card(Card::RANK_9, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "9C");
        ASSERT_EQ(card.getCardValue(), 9);
    }

    TEST(Card, CardJCCreateTest) {
        const Card card(Card::RANK_JACK, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "JC");
        ASSERT_EQ(card.getCardValue(), 10);
    }

    TEST(Card, CardKCCreateTest) {
        const Card card(Card::RANK_KING, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "KC");
        ASSERT_EQ(card.getCardValue(), 10);
    }

    TEST(Card, CardACCreateTest) {
        const Card card(Card::RANK_ACE, Card::SUIT_CLUB);
        ASSERT_EQ(card.printCard(), "AC");
        ASSERT_EQ(card.getCardValue(), 11);
    }


   TEST(Card, DefaultCardCreateTest) {
        Card card;
        ASSERT_EQ(card.printCard(), "2H");
        ASSERT_EQ(card.getCardValue(), 2);
    }

}