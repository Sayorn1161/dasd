#include "Dictionary.h"
#include <fstream>
#include <iostream>

void Dictionary::addWord(const std::string& word, const std::string& definition) {
    words[word] = definition;
}

void Dictionary::removeWord(const std::string& word) {
    words.erase(word);
}

void Dictionary::editWord(const std::string& word, const std::string& newDefinition) {
    if (words.find(word) != words.end()) {
        words[word] = newDefinition;
    }
}

std::string Dictionary::getDefinition(const std::string& word) const {
    auto it = words.find(word);
    if (it != words.end()) {
        return it->second;
    }
    return "Word not found!";
}

void Dictionary::loadFromFile(const std::string& filename) {
    std::ifstream inFile(filename);
    std::string word, definition;

    if (inFile.is_open()) {
        while (inFile >> word && std::getline(inFile, definition)) {
            if (definition.length() > 0 && definition[0] == ' ') {
                definition.erase(0, 1);
            }
            words[word] = definition;
        }
