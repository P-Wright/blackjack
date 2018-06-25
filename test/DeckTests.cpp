#include "Deck.hpp"
#include "gtest/gtest.h"


namespace {
 
    TEST(Deck, DeckCreateTest) {
        const Deck deck;
        std::string fullDeckPrint = deck.printDeck();

        const int expectedDeckSize = 2 * 52;
        EXPECT_EQ(fullDeckPrint.length(), expectedDeckSize) << "** Deck doesn't contain expected number of cards";

        EXPECT_NE(fullDeckPrint.find("2H"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("3H"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("4H"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("5H"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("6H"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("7H"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("8H"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("9H"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("TH"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("JH"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("QH"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("KH"), std::string::npos);
        EXPECT_NE(fullDeckPrint.find("AH"), std::string::npos);

    }
}