#include <iostream>
#include <vector>
#include <list>
template <typename Iterator, typename T>
bool searchValue(Iterator begin, Iterator end,  T valueToFind) {
    while (begin != end) {
        if (*begin == valueToFind) {
            return true;
        }
        ++begin;
    }
    return false;
}

int main() {
    std::vector<std::string> stringVector = {"pear", "bleu", "bannana"};
    std::list<int> intList = {10, 20, 30, 40, 50};
    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

    bool result1 = searchValue(stringVector.begin(), stringVector.end(), std::string("bleu"));
    bool result2 = searchValue(intList.begin(), intList.end(), 30);
    bool result3 = searchValue(floatArray, floatArray + 5, 3.3f);

    std::cout << "Result 1: " << result1 << std::endl;
    std::cout << "Result 2: " << result2 << std::endl;
    std::cout << "Result 3: " << result3 << std::endl;

    return 0;
}

