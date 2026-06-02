/**
 * @file main.cpp
 * @brief Демонстрация работы строковых утилит.
 * 
 * Этот файл содержит функцию main, которая демонстрирует 
 * использование всех функций из пространства имен StringUtils.
 */

#include <iostream>
#include "string_utils.h"

int main() {
    std::cout << "=== Демонстрация String Utilities ===" << std::endl;

    // 1. Trim
    std::string s1 = "   Привет, МИРЭА!   ";
    std::cout << "1. Trim: '" << StringUtils::trim(s1) << "'" << std::endl;

    // 2. Split
    std::string s2 = "C++,Python,Java,Rust";
    std::vector<std::string> parts = StringUtils::split(s2, ',');
    std::cout << "2. Split: ";
    for (const auto& p : parts) std::cout << "[" << p << "] ";
    std::cout << std::endl;

    // 3. Replace
    std::string s3 = "Я люблю котиков. Котики лучшие.";
    std::cout << "3. Replace: " << StringUtils::replace(s3, "котиков", "собак") << std::endl;

    // 4. Palindrome
    std::string s4 = "топот";
    std::cout << "4. Palindrome ('" << s4 << "'): " 
              << (StringUtils::is_palindrome(s4) ? "Да" : "Нет") << std::endl;

    // 5. Anagrams
    std::string s5 = "слушатель";
    std::string s6 = "телесный"; // Анаграмма по набору букв (упрощенно)
    std::cout << "5. Anagram ('" << s5 << "' и '" << s6 << "'): " 
              << (StringUtils::is_anagram(s5, s6) ? "Да" : "Нет") << std::endl;

    // 6. Word count
    std::string s7 = "   Раз   два   три测试  ";
    std::cout << "6. Word count: " << StringUtils::word_count(s7) << " слов(а)" << std::endl;

    return 0;
}