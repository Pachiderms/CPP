/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:49:28 by marvin            #+#    #+#             */
/*   Updated: 2025/10/29 16:49:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>
#include <stdexcept>
#include <sstream>

class PmergeMe {
public:
    static void process(int ac, char **av);

private:
    static void mergeInsertSortVector(std::vector<int> &v);
    static void mergeInsertSortDeque(std::deque<int> &d);

    template <typename T>
    static void mergeInsertSort(T &container);
};

#endif
