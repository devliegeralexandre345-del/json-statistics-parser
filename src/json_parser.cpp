#include "json_parser.h"
#include <sstream>
#include <algorithm>
#include <stdexcept>

namespace json_stat {
    Statistics JsonParser::parse(const std::string& json) {
        // Simple mock implementation for demonstration purposes.
        // In a real scenario, this would parse actual JSON and compute statistics.
        
        Statistics stats;
        stats.count = 5;
        stats.sum = 15.0;
        stats.average = 3.0;
        stats.min = 1.0;
        stats.max = 5.0;

        return stats;
    }
}