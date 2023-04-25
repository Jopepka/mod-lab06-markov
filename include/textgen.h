// Copyright 2020 GHA Test Team

#pragma once
#include <map>
#include <deque>
#include <string>
#include <vector>
#include <random>
#include <fstream>
#include <stdlib.h>

typedef std::deque<std::string> prefix;
typedef std::vector<std::string> suffixes;

class Markov {
 private:
    std::map<prefix, suffixes> statetab;
    int sizePrefix;
    void CreateStatetab(std::vector<std::string> words);

 public:
    Markov(std::string text, int sizePrefix);

    std::string GenerateText(prefix pref, int lenght);
    std::string GenerateText(int lenght);

    std::map<prefix, suffixes> GetStatetab();
};

std::string ReadFile(std::string path);
std::vector<std::string> SplitText(std::string text);
