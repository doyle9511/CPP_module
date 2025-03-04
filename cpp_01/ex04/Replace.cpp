/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 16:16:32 by donghwi2          #+#    #+#             */
/*   Updated: 2025/03/04 12:03:17 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(const std::string &filename, const std::string &str1, const std::string &str2)
	: filename(filename), str1(str1), str2(str2) {}

Replace::~Replace() {}

std::string Replace::replaceString(const std::string& str) const {
	std::string	result;
	int			start = 0;//검색을 시작할 위치
	int			point = -1;

	point = str.find(str1, start);//문자열검색함수 /n start에서 str이 일치하는지 찾음
	while (point != -1) {// 더이상 없으면 -1 리턴함
		result += str.substr(start, point - start);
		result += str2;
		start = point + str1.length();
		point = str.find(str1, start);
	}
	result += str.substr(start);//남은 짜투리 합체
	return (result);
}

int	Replace::checkInput() {
	if (filename.empty() == 1 || str1.empty() == 1 || str2.empty() == 1)
	{
		std::cout << "Empty input" << std::endl;
		return (-1);
	}
	return (0);
}

bool	Replace::processRun(){
	std::ifstream	inFile(filename.c_str());//ifstream은 파일데이터를 읽기위한 클래스임 / c++98에서는 string->c문자열로 바꿔줘야함
	if (inFile.is_open() == false){
		std::cout << "file open fail" << std::endl;
		return (false);
	}
	
	std::string		outFileName = "changed_" + filename;
	std::ofstream	outFile(outFileName.c_str());
	if (outFile.is_open() == false){
		std::cout << "outfile create fail" << std::endl;
		inFile.close();
		return (false);
	}
	
	std::string		oneLine;
	while (std::getline(inFile, oneLine)){
		outFile << replaceString(oneLine); // 한줄씩 outFile에 쌓아가기
		if (inFile.eof() == false)
			outFile << std::endl;
	}
	return (true);
}
