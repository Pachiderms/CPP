/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzizi <tzizi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 10:40:56 by tzizi             #+#    #+#             */
/*   Updated: 2026/02/04 10:40:56 by tzizi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <exception>
#include <vector>
#include <deque>

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
