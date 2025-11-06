#pragma once
#include"Object.h"

namespace Utils {
    class String {
    public:
        static std::vector<std::string> split(std::string haystack, std::string needle) {
            std::vector<std::string> result;
            int startPos = 0;
            size_t foundPos = haystack.find(needle, startPos);

            while (foundPos != std::string::npos) {
                int count = foundPos - startPos;
                std::string token = haystack.substr(startPos, count);
                result.push_back(token);

                startPos = foundPos + needle.length();
                foundPos = haystack.find(needle, startPos);
            }

            // The remaining
            std::string token = haystack.substr(startPos, haystack.length() - startPos);
            result.push_back(token);

            return result;
        }
    };
}