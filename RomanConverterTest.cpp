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
    EXPECT_THAT(convert(19), Eq("XIX"));
    EXPECT_THAT(convert(1997), Eq("MCMXCVII"));
    EXPECT_THAT(convert(3999), Eq("MMMCMXCIX"));
    EXPECT_THAT(convert(7), Eq("VII"));
    EXPECT_THAT(convert(8), Eq("VIII"));
    EXPECT_THAT(convert(12), Eq("XII"));
    EXPECT_THAT(convert(13), Eq("XIII"));
    EXPECT_THAT(convert(15), Eq("XV"));
    EXPECT_THAT(convert(16), Eq("XVI"));
    EXPECT_THAT(convert(17), Eq("XVII"));
    EXPECT_THAT(convert(18), Eq("XVIII"));
    EXPECT_THAT(convert(21), Eq("XXI"));
    EXPECT_THAT(convert(22), Eq("XXII"));
    EXPECT_THAT(convert(23), Eq("XXIII"));
    EXPECT_THAT(convert(24), Eq("XXIV"));
    EXPECT_THAT(convert(25), Eq("XXV"));
    EXPECT_THAT(convert(26), Eq("XXVI"));
    EXPECT_THAT(convert(27), Eq("XXVII"));
    EXPECT_THAT(convert(28), Eq("XXVIII"));
    EXPECT_THAT(convert(29), Eq("XXIX"));
    EXPECT_THAT(convert(30), Eq("XXX"));
    EXPECT_THAT(convert(31), Eq("XXXI"));
    EXPECT_THAT(convert(32), Eq("XXXII"));
    EXPECT_THAT(convert(33), Eq("XXXIII"));
    EXPECT_THAT(convert(34), Eq("XXXIV"));
    EXPECT_THAT(convert(35), Eq("XXXV"));
    EXPECT_THAT(convert(36), Eq("XXXVI"));
    EXPECT_THAT(convert(37), Eq("XXXVII"));
    EXPECT_THAT(convert(38), Eq("XXXVIII"));
    EXPECT_THAT(convert(39), Eq("XXXIX"));
    EXPECT_THAT(convert(41), Eq("XLI"));
    EXPECT_THAT(convert(42), Eq("XLII"));
    EXPECT_THAT(convert(43), Eq("XLIII"));
    EXPECT_THAT(convert(44), Eq("XLIV"));
}
