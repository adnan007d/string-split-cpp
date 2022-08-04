#include <gtest/gtest.h>
#include <string_split.hpp>

TEST(StringSplit, NormalSplit)
{
    std::vector<std::string> vec{};
    std::string s{"Hell,Woow,sd,adsdm,asdsad,sadasdsa,"};
    std::string token{","};
    std::vector<std::string> result{"Hell",
                                    "Woow",
                                    "sd",
                                    "adsdm",
                                    "asdsad",
                                    "sadasdsa"};

    EXPECT_EQ(woow::split(vec, s, token), result);
}

TEST(StringSplit, MultiCharToken)
{
    std::vector<std::string> vec{};
    std::string s{"Hell, Woow, sd, adsdm, asdsad, sadasdsa,"};
    std::string token{", "};
    std::vector<std::string> result{"Hell",
                                    "Woow",
                                    "sd",
                                    "adsdm",
                                    "asdsad",
                                    "sadasdsa,"};

    EXPECT_EQ(woow::split(vec, s, token), result);
}

TEST(StringSplit, EmptyString)
{
    std::vector<std::string> vec{};
    std::string s{};
    std::string token{", "};
    std::vector<std::string> result{};

    EXPECT_EQ(woow::split(vec, s, token), result);
}

TEST(StringSplit, EmptyToken)
{
    std::vector<std::string> vec{};
    std::string s{"Hell, Woow, sd, adsdm, asdsad, sadasdsa,"};
    std::string token{};
    std::vector<std::string> result{s};

    EXPECT_EQ(woow::split(vec, s, token), result);
}

///

TEST(StackOverlow, NormalSplit)
{
    std::vector<std::string> vec{};
    std::string s{"Hell,Woow,sd,adsdm,asdsad,sadasdsa,"};
    std::string token{","};
    std::vector<std::string> result{"Hell",
                                    "Woow",
                                    "sd",
                                    "adsdm",
                                    "asdsad",
                                    "sadasdsa"};

    EXPECT_EQ(stackoverflow::split(vec, s, token), result);
}

TEST(StackOverlow, MultiCharToken)
{
    std::vector<std::string> vec{};
    std::string s{"Hell, Woow, sd, adsdm, asdsad, sadasdsa,"};
    std::string token{", "};
    std::vector<std::string> result{"Hell",
                                    "Woow",
                                    "sd",
                                    "adsdm",
                                    "asdsad",
                                    "sadasdsa,"};

    EXPECT_EQ(stackoverflow::split(vec, s, token), result);
}

TEST(StackOverlow, EmptyString)
{
    std::vector<std::string> vec{};
    std::string s{};
    std::string token{", "};
    std::vector<std::string> result{};

    EXPECT_EQ(stackoverflow::split(vec, s, token), result);
}

TEST(StackOverlow, EmptyToken)
{
    std::vector<std::string> vec{};
    std::string s{"Hell, Woow, sd, adsdm, asdsad, sadasdsa,"};
    std::string token{};
    std::vector<std::string> result{s};

    EXPECT_EQ(stackoverflow::split(vec, s, token), result);
}