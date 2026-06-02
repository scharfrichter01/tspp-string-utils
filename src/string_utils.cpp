#include "string_utils.h"
#include <algorithm>
#include <cctype>
#include <sstream>

namespace StringUtils {

    std::string trim(const std::string& str) {
        const std::string whitespace = " \t\n\r\f\v";
        size_t first = str.find_first_not_of(whitespace);
        if (first == std::string::npos) return "";
        size_t last = str.find_last_not_of(whitespace);
        return str.substr(first, (last - first + 1));
    }

    std::vector<std::string> split(const std::string& str, char delimiter) {
        std::vector<std::string> tokens;
        std::string token;
        std::istringstream tokenStream(str);
        while (std::getline(tokenStream, token, delimiter)) {
            tokens.push_back(token);
        }
        return tokens;
    }

    std::string replace(const std::string& str, const std::string& from, const std::string& to) {
        if (from.empty()) return str;
        std::string result = str;
        size_t start_pos = 0;
        while ((start_pos = result.find(from, start_pos)) != std::string::npos) {
            result.replace(start_pos, from.length(), to);
            start_pos += to.length();
        }
        return result;
    }

    bool is_palindrome(const std::string& str) {
        if (str.empty()) return true;
        size_t left = 0;
        size_t right = str.length() - 1;
        while (left < right) {
            if (str[left] != str[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool is_anagram(const std::string& str1, const std::string& str2) {
        if (str1.length() != str2.length()) return false;
        std::string s1 = str1;
        std::string s2 = str2;
        std::sort(s1.begin(), s1.end());
        std::sort(s2.begin(), s2.end());
        return s1 == s2;
    }

    int word_count(const std::string& str) {
        std::istringstream stream(str);
        std::string word;
        int count = 0;
        while (stream >> word) {
            count++;
        }
        return count;
    }

} // namespace StringUtils