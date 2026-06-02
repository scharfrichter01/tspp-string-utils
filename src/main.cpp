#include <iostream>
#include "string_utils.h"

int main() {
    std::cout << "--- String Utilities Demo ---\n";

    // 1. Trim
    std::string s1 = "   Hello, World!   ";
    std::cout << "Trim: '" << StringUtils::trim(s1) << "'\n";

    // 2. Split
    std::string s2 = "apple,banana,cherry";
    std::vector<std::string> parts = StringUtils::split(s2, ',');
    std::cout << "Split: ";
    for (const auto& p : parts) std::cout << "[" << p << "] ";
    std::cout << "\n";

    // 3. Replace
    std::string s3 = "I love cats. Cats are great.";
    std::cout << "Replace: " << StringUtils::replace(s3, "cats", "dogs") << "\n";

    // 4. Palindrome
    std::string s4 = "radar";
    std::cout << "Is '" << s4 << "' palindrome? " << (StringUtils::is_palindrome(s4) ? "Yes" : "No") << "\n";

    // 5. Anagrams
    std::string s5 = "listen";
    std::string s6 = "silent";
    std::cout << "Are '" << s5 << "' and '" << s6 << "' anagrams? " << (StringUtils::is_anagram(s5, s6) ? "Yes" : "No") << "\n";

    // 6. Word count
    std::string s7 = "   The quick brown fox   jumps over the lazy dog.  ";
    std::cout << "Word count: " << StringUtils::word_count(s7) << "\n";

    return 0;
}