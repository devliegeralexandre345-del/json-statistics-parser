#include <iostream>
#include "json_parser.h"

int main() {
    const std::string sample_json = R"({\n  \"data\": [1, 2, 3, 4, 5]\n})";
    auto stats = json_stat::JsonParser::parse(sample_json);
    
    std::cout << "Count: " << stats.count << "\n";
    std::cout << "Sum: " << stats.sum << "\n";
    std::cout << "Average: " << stats.average << "\n";
    std::cout << "Min: " << stats.min << "\n";
    std::cout << "Max: " << stats.max << "\n";

    return 0;
}