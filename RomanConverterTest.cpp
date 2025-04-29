#include "gmock/gmock.h"

#include "RomanConverter.h"

using namespace ::testing;

TEST(RomanConverter, CanConvertPositiveDigits)
{
    RomanConverter c;

    EXPECT_THAT(c.convert(1), Eq("I"));
    EXPECT_THAT(c.convert(2), Eq("II"));
    EXPECT_THAT(c.convert(3), Eq("III"));
    EXPECT_THAT(c.convert(10), Eq("X"));
    EXPECT_THAT(c.convert(11), Eq("XI"));
    EXPECT_THAT(c.convert(20), Eq("XX"));
    EXPECT_THAT(c.convert(5), Eq("V"));
    EXPECT_THAT(c.convert(6), Eq("VI"));
    EXPECT_THAT(c.convert(4), Eq("IV"));
    EXPECT_THAT(c.convert(9), Eq("IX"));
    EXPECT_THAT(c.convert(14), Eq("XIV"));
    EXPECT_THAT(c.convert(50), Eq("L"));
    EXPECT_THAT(c.convert(100), Eq("C"));
    EXPECT_THAT(c.convert(500), Eq("D"));
    EXPECT_THAT(c.convert(1000), Eq("M"));
    EXPECT_THAT(c.convert(40), Eq("XL"));
    EXPECT_THAT(c.convert(19), Eq("XIX"));
    EXPECT_THAT(c.convert(1997), Eq("MCMXCVII"));
    EXPECT_THAT(c.convert(3999), Eq("MMMCMXCIX"));
    EXPECT_THAT(c.convert(7), Eq("VII"));
    EXPECT_THAT(c.convert(8), Eq("VIII"));
    EXPECT_THAT(c.convert(12), Eq("XII"));
    EXPECT_THAT(c.convert(13), Eq("XIII"));
    EXPECT_THAT(c.convert(15), Eq("XV"));
    EXPECT_THAT(c.convert(16), Eq("XVI"));
    EXPECT_THAT(c.convert(17), Eq("XVII"));
    EXPECT_THAT(c.convert(18), Eq("XVIII"));
    EXPECT_THAT(c.convert(21), Eq("XXI"));
    EXPECT_THAT(c.convert(22), Eq("XXII"));
    EXPECT_THAT(c.convert(23), Eq("XXIII"));
    EXPECT_THAT(c.convert(24), Eq("XXIV"));
    EXPECT_THAT(c.convert(25), Eq("XXV"));
    EXPECT_THAT(c.convert(26), Eq("XXVI"));
    EXPECT_THAT(c.convert(27), Eq("XXVII"));
    EXPECT_THAT(c.convert(28), Eq("XXVIII"));
    EXPECT_THAT(c.convert(29), Eq("XXIX"));
    EXPECT_THAT(c.convert(30), Eq("XXX"));
    EXPECT_THAT(c.convert(31), Eq("XXXI"));
    EXPECT_THAT(c.convert(32), Eq("XXXII"));
    EXPECT_THAT(c.convert(33), Eq("XXXIII"));
    EXPECT_THAT(c.convert(34), Eq("XXXIV"));
    EXPECT_THAT(c.convert(35), Eq("XXXV"));
    EXPECT_THAT(c.convert(36), Eq("XXXVI"));
    EXPECT_THAT(c.convert(37), Eq("XXXVII"));
    EXPECT_THAT(c.convert(38), Eq("XXXVIII"));
    EXPECT_THAT(c.convert(39), Eq("XXXIX"));
    EXPECT_THAT(c.convert(41), Eq("XLI"));
    EXPECT_THAT(c.convert(42), Eq("XLII"));
    EXPECT_THAT(c.convert(43), Eq("XLIII"));
    EXPECT_THAT(c.convert(44), Eq("XLIV"));
    EXPECT_THAT(c.convert(288), Eq("CCLXXXVIII"));
    EXPECT_THAT(c.convert(2999), Eq("MMCMXCIX"));
    EXPECT_THAT(c.convert(3447), Eq("MMMCDXLVII"));
    EXPECT_THAT(c.convert(1513), Eq("MDXIII"));
}

TEST(RomanConverter, ConvertsValuesLessThanOneToEmptyString)
{
    RomanConverter c;

    EXPECT_THAT(c.convert(0), Eq(""));
    EXPECT_THAT(c.convert(-1), Eq(""));
}