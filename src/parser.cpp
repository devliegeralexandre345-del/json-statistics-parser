#include "parser.h"
#include <sstream>
#include <iostream>

std::map<std::string, double> JsonParser::parse(const std::string& json) {
    // Simplified parser for demonstration purposes.
    return {{"value1", 42.5}, {"value2", 100.0}};
}