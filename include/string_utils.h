#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string>
#include <vector>

namespace StringUtils {

    /// @brief Удаляет пробельные символы в начале и в конце строки.
    /// @param str Исходная строка.
    /// @return Обрезанная строка.
    std::string trim(const std::string& str);

    /// @brief Разделяет строку на подстроки по указанному разделителю.
    /// @param str Исходная строка.
    /// @param delimiter Символ-разделитель.
    /// @return Вектор подстрок.
    std::vector<std::string> split(const std::string& str, char delimiter);

    /// @brief Заменяет все вхождения подстроки на другую подстроку.
    /// @param str Исходная строка.
    /// @param from Подстрока для замены.
    /// @param to Новая подстрока.
    /// @return Строка с произведенными заменами.
    std::string replace(const std::string& str, const std::string& from, const std::string& to);

    /// @brief Проверяет, является ли строка палиндромом.
    /// @param str Проверяемая строка.
    /// @return true, если строка читается одинаково в обоих направлениях.
    bool is_palindrome(const std::string& str);

    /// @brief Проверяет, являются ли две строки анаграммами.
    /// @param str1 Первая строка.
    /// @param str2 Вторая строка.
    /// @return true, если строки состоят из одинакового набора символов.
    bool is_anagram(const std::string& str1, const std::string& str2);

    /// @brief Подсчитывает количество слов в строке.
    /// @param str Исходная строка.
    /// @return Количество слов.
    int word_count(const std::string& str);

} // namespace StringUtils

#endif