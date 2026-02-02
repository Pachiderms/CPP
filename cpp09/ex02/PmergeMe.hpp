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

#pragma once

#include <string>
#include <exception>
#include <vector>
#include <deque>
#include <cstddef>

class PmergeMe
{
    public :
        PmergeMe(char **argv);
        PmergeMe(PmergeMe const &copy);
        PmergeMe &operator=(PmergeMe const &src);
        ~PmergeMe(){};

        void process();

    private :
        std::vector<int> m_v;
        std::deque<int> m_d;

        PmergeMe(){};

        std::vector<size_t> buildJacobOrder(size_t m);
        void sortVector();
        void sortDeque();
};
