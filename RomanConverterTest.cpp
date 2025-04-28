#include "gmock/gmock.h"

#include "RomanConverter.h"

using namespace ::testing;
using namespace std;

TEST(RomanConverter, CanConvertPositiveDigits)
{
    EXPECT_THAT(convert(1), Eq("I"));
    EXPECT_THAT(convert(2), Eq("II"));
    EXPECT_THAT(convert(3), Eq("III"));
    EXPECT_THAT(convert(10), Eq("X"));
    EXPECT_THAT(convert(11), Eq("XI"));
    EXPECT_THAT(convert(20), Eq("XX"));
    EXPECT_THAT(convert(5), Eq("V"));
    EXPECT_THAT(convert(6), Eq("VI"));
    EXPECT_THAT(convert(4), Eq("IV"));
    EXPECT_THAT(convert(9), Eq("IX"));
    EXPECT_THAT(convert(14), Eq("XIV"));
    EXPECT_THAT(convert(50), Eq("L"));
    EXPECT_THAT(convert(100), Eq("C"));
    EXPECT_THAT(convert(500), Eq("D"));
    EXPECT_THAT(convert(1000), Eq("M"));
    EXPECT_THAT(convert(40), Eq("XL"));

    //EXPECT_THAT(convert(7), Eq("VII"));
}
