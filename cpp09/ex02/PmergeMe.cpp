/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:49:25 by marvin            #+#    #+#             */
/*   Updated: 2025/10/29 16:49:25 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int PmergeMe::jacobsthal(int j){
    if (j == 0)
        return 0;
    if (j == 1)
        return 1;
    return (jacobsthal(j - 1) + 2 * jacobsthal(j - 2));
}

template <typename T>
void PmergeMe::mergeInsertSort(T &container) {
    (void)container;
}

void PmergeMe::mergeInsertSortVector(std::vector<int> &v) { mergeInsertSort(v); }
void PmergeMe::mergeInsertSortDeque(std::deque<int> &d) { mergeInsertSort(d); }

void PmergeMe::process(int ac, char **av) {
    if (ac < 2)
        throw std::runtime_error("Bad input");

    for (int i = 0; i < std::atoi(av[1]); i++) {
        std::cout << "j[" << i << "] = " << jacobsthal(i) << std::endl;};
    std::vector<int> vec;
    std::deque<int> d;

    for (int i = 1; i < ac; ++i) {
        std::istringstream iss(av[i]);
        int n;
        if (!(iss >> n) || n < 0)
            throw std::runtime_error("Bad input");
        vec.push_back(n);
        d.push_back(n);
    }

    std::cout << "Before: ";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    clock_t startVec = clock();
    mergeInsertSortVector(vec);
    clock_t endVec = clock();

    clock_t startDeq = clock();
    mergeInsertSortDeque(d);
    clock_t endDeq = clock();

    std::cout << "After: ";
    for (size_t i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << " ";
    std::cout << std::endl;

    double timeVec = double(endVec - startVec) / CLOCKS_PER_SEC * 1e6;
    double timeDeq = double(endDeq - startDeq) / CLOCKS_PER_SEC * 1e6;

    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << timeVec << " us" << std::endl;
    std::cout << "Time to process a range of " << d.size() << " elements with std::deque : " << timeDeq << " us" << std::endl;
}
