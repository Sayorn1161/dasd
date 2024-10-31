#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <map>
#include <string>

class Dictionary {
public:
    void addWord(const std::string& word, const std::string& definition);
    void removeWord(const std::string& word);
    void editWord(const std::string& word, const std::string& newDefinition);
    std::string getDefinition(const std::string& word) const;
    void loadFromFile(const std::string& filename);
    void saveToFile(const std::string& filename) const;

private:
    std::map<std::string, std::string> words;
};

#endif // DICTIONARY_H
