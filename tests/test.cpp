#include <iostream>
#include "json_parser.h"

int main() {
    const std::string sample_json = R"({\n  \"data\": [1, 2, 3, 4, 5]\n})";
    auto stats = json_stat::JsonParser::parse(sample_json);

    // Basic checks to ensure functionality works as expected.
    if (stats.count != 5) {
        std::cout << "Test failed: count is not correct\n";
        return 1;
    }

    if (stats.sum != 15.0) {
        std::cout << "Test failed: sum is not correct\n";
        return 1;
    }

    std::cout << "All tests passed!\n";
    return 0;
}