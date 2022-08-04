#include <string>
#include <vector>
#include <algorithm>

namespace woow
{
    auto split(std::vector<std::string> &result, std::string_view s, std::string_view t) -> std::vector<std::string> &
    {

        if (t.empty())
        {
            result.emplace_back(s);
            return result;
        }

        result.reserve(s.size());

        if (!s.empty())
        {
            std::size_t first = 0;
            while (first < s.size())
            {
                const auto foundIndex = s.find(t, first);
                const auto last = foundIndex < s.size() ? foundIndex : s.size();
                result.emplace_back(s.begin() + first, s.begin() + last);
                first = last + t.size();
            }
        }
        return result;
    }

}

namespace stackoverflow
{
    auto split(std::vector<std::string> &result, std::string_view s, std::string_view token) -> std::vector<std::string> &
    {

        if (token.empty())
        {
            result.emplace_back(s);
            return result;
        }

        result.reserve(s.size());

        size_t found = s.find(token);
        size_t startIndex = 0;

        while (found != std::string::npos)
        {
            result.push_back(std::string(s.begin() + startIndex, s.begin() + found));
            startIndex = found + token.size();
            found = s.find(token, startIndex);
        }
        if (startIndex != s.size())
            result.push_back(std::string(s.begin() + startIndex, s.end()));

        return result;
    }

}
