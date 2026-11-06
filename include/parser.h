#pragma once
#include <string>
#include <map>
#include <vector>

class JsonParser {
public:
    std::map<std::string, double> parse(const std::string& json);
};