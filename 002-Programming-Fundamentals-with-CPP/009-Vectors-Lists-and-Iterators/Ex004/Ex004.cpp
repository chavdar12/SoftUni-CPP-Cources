#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> first_sequence{std::istream_iterator<int>(std::cin), std::istream_iterator<int>()};
    std::vector<int> second_sequence{std::istream_iterator<int>(std::cin), std::istream_iterator<int>()};

    std::vector<int> merged_sequence;
    std::merge(first_sequence.begin(), first_sequence.end(), second_sequence.begin(), second_sequence.end(),
               std::back_inserter(merged_sequence));

    std::copy(merged_sequence.begin(), merged_sequence.end(), std::ostream_iterator<int>(std::cout, " "));

    return 0;
}
