#include "pch.h"
#include "CppUnitTest.h"
#include "../CSCN71020_A3/rock_paper_scissors.h" // Include the header file

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTest
{
    TEST_CLASS(RockPaperScissorsTest)
    {
    public:

        TEST_METHOD(Player1WinsWithRock)
        {
            // Player1: Rock, Player2: Scissors
            Assert::AreEqual("Player1", determine_winner("Rock", "Scissors"));
        }

        TEST_METHOD(Player2WinsWithPaper)
        {
            // Player1: Rock, Player2: Paper
            Assert::AreEqual("Player2", determine_winner("Rock", "Paper"));
        }

        TEST_METHOD(DrawWithScissors)
        {
            // Player1: Scissors, Player2: Scissors
            Assert::AreEqual("Draw", determine_winner("Scissors", "Scissors"));
        }

        TEST_METHOD(InvalidInput)
        {
            // Player1: Rock, Player2: Lizard (invalid input)
            Assert::AreEqual("Invalid", determine_winner("Rock", "Lizard"));
        }
    };
}