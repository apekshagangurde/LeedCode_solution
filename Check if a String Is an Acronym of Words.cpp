class Solution {
public:
   bool isAcronym(const std::vector<std::string>& words, const std::string& s) {
    if (words.empty() || s.empty()) {
        return false;
    }

    std::string acronym;
    for (const std::string& word : words) {
        if (!word.empty()) {
            acronym += word[0];
        }
    }

    return s == acronym;
}
};
