#include <iostream>
#include <memory>
#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> res(numRows);

        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    res[i].push_back(1);
                } else {
                    res[i].push_back(res[i - 1][j - 1] + res[i - 1][j]);
                }
            }
        }

        return res;
    }
};

int main(int argc, char** argv) {
    std::unique_ptr<Solution> ptr(new Solution());
    for (auto vec1 : ptr->generate(5)) {
        for (auto vec2 : vec1) {
            std::cout << vec2 << " ";
        }
        std::cout << std::endl;
    }
}
