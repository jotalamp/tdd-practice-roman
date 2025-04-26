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
}
