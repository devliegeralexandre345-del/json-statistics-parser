#pragma once
#include <string>
#include <map>
#include <vector>

namespace json_stat {
    struct Statistics {
        int count{};
        double sum{};
        double average{};
        double min{};
        double max{};
    };

    class JsonParser {
    public:
        static Statistics parse(const std::string& json);
    };
}