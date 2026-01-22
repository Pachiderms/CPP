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

int jacobsthal(int j){
    if (j == 0)
        return 0;
    if (j == 1)
        return 1;
    int index = jacobsthal(j - 1) + 2 * jacobsthal(j - 2);
    return index;
}

template <typename T>
typename T::iterator easyfind(T v, int val)
{
    typename T::iterator it = std::find(v.begin(), v.end(), val);
    if (it == v.end())
        throw std::runtime_error("Value not found.");
    return it;
}

template<typename T>
void DoJacob(T &v, T old_vec, T l, int j){
    if (l.empty())
        return;
    std::cout << jacobsthal(j - 1) << " end.\n";
    for (int i = j; i > jacobsthal(j - 1); i--){
        std::cout << v[i - 1] << std::endl;
        
    }
    DoJacob(v, old_vec, l, j + 1);
}

template <typename T>
void PmergeMe::mergeInsertSort(T &container) {
    (void)container;
}

void PmergeMe::mergeInsertSortVector(std::vector<int> &v) { 
    std::vector<int> winners, losers;

    size_t len = v.size();
    for (size_t i = 0; i < len; i += 2){
        if (i + 1 == len ){
            losers.push_back(v[i]);
            break;
        }
        if (v[i] > v[i + 1]){
            winners.push_back(v[i]);
            losers.push_back(v[i + 1]);
        }
        else{
            winners.push_back(v[i + 1]);
            losers.push_back(v[i]);
        }
    }
    std::vector<int> w = winners;
    std::sort(winners.begin(), winners.end());
    for (int i = 0; i < (int)winners.size(); i++){
        std::cout << winners[i] << "/";
    }
    std::cout <<"\n";
    DoJacob(winners, w, losers, 3);
    for (int i = 0; i < (int)winners.size(); i++){
        std::cout << winners[i] << "/";
    }
    std::cout <<"\n";
}
void PmergeMe::mergeInsertSortDeque(std::deque<int> &d) { mergeInsertSort(d); }

void PmergeMe::process(int ac, char **av) {
    if (ac < 2)
        throw std::runtime_error("Bad input");

    // for (int i = 0; i < std::atoi(av[1]); i++) {
    //     std::cout << "j[" << i << "] = " << jacobsthal(i) << std::endl;};
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
