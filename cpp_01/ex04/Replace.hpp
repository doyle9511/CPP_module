/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 03:21:32 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/04 12:03:04 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <string>
#include <fstream>	// 파일 입출력 처리
#include <iostream>

class Replace{
private:
	std::string	filename;
	std::string	str1;
	std::string str2;
	std::string replaceString(const std::string& str) const;

public:
	Replace(const std::string &filename, const std::string &str1, const std::string &str2);
	//const 쓰는 이유: argv로 받은 c스타일 문자열을 형변환하면서 상수같은 임시객체가 받음. 이를 일치시켜주는게 const
	~Replace();
	bool	processRun();
	int		checkInput();
};

#endif
