#include <array>
#include <random>
#include <cassert>
#include <algorithm>

const std::size_t lst_size = 10000;
const std::size_t nr_runs = 100;

typedef unsigned int uint;

void bubble_sort(std::array<uint, lst_size>& lst) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        for (std::size_t i = 0; i < lst_size - 1; ++i) {
            if (lst[i+1] > lst[i]) {
                std::swap(lst[i], lst[i+1]);
                swapped = true;
            }
        }
    }
}

bool is_sorted(std::array<uint, lst_size> const& lst) {
    for (std::size_t i = 0; i < lst_size - 1; ++i)
        if (lst[i+1] > lst[i])
            return false;
    return true;
} 

int main() {
    std::mt19937 g;

    std::array<uint, lst_size> lst;
    std::iota(lst.begin(), lst.end(), 0);

    for (std::size_t i = 0; i < nr_runs; ++i) {
        std::shuffle(lst.begin(), lst.end(), g);
        bubble_sort(lst);
        assert(is_sorted(lst));
    }
}
