#include <gtest/gtest.h>
#include "string_utils.h"
#include <string>
#include <vector>

TEST(StringUtilsTest, TrimBasic) {
    EXPECT_EQ(StringUtils::trim("  hello  "), "hello");
    EXPECT_EQ(StringUtils::trim("\t\nworld\t\n"), "world");
    EXPECT_EQ(StringUtils::trim("   "), "");
}

TEST(StringUtilsTest, SplitBasic) {
    auto result = StringUtils::split("a,b,c", ',');
    ASSERT_EQ(result.size(), 3);
    EXPECT_EQ(result[0], "a");
    EXPECT_EQ(result[1], "b");
    EXPECT_EQ(result[2], "c");
}

TEST(StringUtilsTest, ReplaceBasic) {
    EXPECT_EQ(StringUtils::replace("hello world", "world", "universe"), "hello universe");
    EXPECT_EQ(StringUtils::replace("foo bar foo", "foo", "baz"), "baz bar baz");
    EXPECT_EQ(StringUtils::replace("test", "", "x"), "test"); // Проверка защиты от пустой строки
}

TEST(StringUtilsTest, PalindromeBasic) {
    EXPECT_TRUE(StringUtils::is_palindrome("radar"));
    EXPECT_TRUE(StringUtils::is_palindrome("топот"));
    EXPECT_FALSE(StringUtils::is_palindrome("hello"));
    EXPECT_TRUE(StringUtils::is_palindrome(""));
}

TEST(StringUtilsTest, AnagramBasic) {
    EXPECT_TRUE(StringUtils::is_anagram("listen", "silent"));
    EXPECT_TRUE(StringUtils::is_anagram("кот", "ток"));
    EXPECT_FALSE(StringUtils::is_anagram("apple", "pabble"));
    EXPECT_FALSE(StringUtils::is_anagram("abc", "abcd"));
}

TEST(StringUtilsTest, WordCountBasic) {
    EXPECT_EQ(StringUtils::word_count("hello world"), 2);
    EXPECT_EQ(StringUtils::word_count("   one   two   three  "), 3);
    EXPECT_EQ(StringUtils::word_count(""), 0);
}