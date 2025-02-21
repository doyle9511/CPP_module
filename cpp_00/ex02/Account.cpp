/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: donghwi2 <donghwi2@student.42gyeongsan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:28:03 by donghwi2          #+#    #+#             */
/*   Updated: 2025/02/19 14:50:31 by donghwi2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

//c++에서 static 맴버변수는 무조건 class외부에서 한 번만 정의되어야 함.
//static 변수는 프로그램 시작시 무조건 단 한 번만 초기화 되어야 함.
//그러므로 전역 범위에서 한 번만 초기화 해야 함.
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

/**************************** 생성자 & 소멸자 ***********************************/

Account::Account( void ){
// 이건 C++에서 응용하는 방법임. 아무것도 안들어오면 오류라는걸
// 이런식으로 private에 넣어서 저절로 터지게 만듬.
}

Account::Account( int initial_deposit ){
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;

	std::cout << DATE << "index:" << _accountIndex << ";amount:"\
		<< initial_deposit << ";created" << std::endl;
}

Account::~Account( void ){
	std::cout << DATE << "index:" << this->_accountIndex << ";amount:"\
		<< this->_amount << ";closed" << std::endl;
}

/***************************** public 메서드 ***********************************/

int		Account::getNbAccounts( void ){
	return (_nbAccounts);
}

int		Account::getTotalAmount( void ){
	return (_totalAmount);
}

int		Account::getNbDeposits( void ){
	return (_totalAmount);
}

int		Account::getNbWithdrawals( void ){
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" 	<< getNbAccounts()\
			<< ";total:"	 	<< getTotalAmount()\
			<< ";deposits:" 	<< getNbDeposits()\
			<< ";withdrawals:" 	<< getNbWithdrawals()\
			<< std::endl;
}

void	Account::makeDeposit( int deposit ){
	
}

bool	Account::makeWithdrawal( int withdrawal ){
	
}
void Account::makeDeposit(int deposit) {
    int p_amount = this->_amount;
    this->_amount += deposit;
    this->_nbDeposits++;
    this->_totalAmount += deposit;
    this->_totalNbDeposits++;
    
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << p_amount << ";";
    std::cout << "deposit:" << deposit << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

// 출금
bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    
    if (this->_amount < withdrawal) {
        std::cout << "withdrawal:refused" << std::endl;
        return false;
    }
    
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    this->_totalAmount -= withdrawal;
    this->_totalNbWithdrawals++;
    
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}

int		Account::checkAmount( void ) const{
	return this->_amount;	
}

void	Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

static void	_displayTimestamp( void ){
	
}

/***************************** private 메서드 **********************************/
/*
void	Account::_displayTimestamp( void ){
	
}
*/

//*

// #include <iostream>
// #include <iomanip>
// #include <ctime>
// #include "Account.hpp"

// // static 멤버 변수 초기화
// int Account::_nbAccounts = 0;
// int Account::_totalAmount = 0;
// int Account::_totalNbDeposits = 0;
// int Account::_totalNbWithdrawals = 0;

// // private 타임스탬프 표시 함수
// void Account::_displayTimestamp(void) {
//     std::cout << "[19920104_091532] ";
// }

// 생성자
// Account::Account(int initial_deposit) {
//     this->_accountIndex = this->_nbAccounts;
//     this->_amount = initial_deposit;
//     this->_nbDeposits = 0;
//     this->_nbWithdrawals = 0;
    
//     this->_nbAccounts++;
//     this->_totalAmount += initial_deposit;
    
//     _displayTimestamp();
//     std::cout << "index:" << this->_accountIndex << ";";
//     std::cout << "amount:" << this->_amount << ";";
//     std::cout << "created" << std::endl;
// }

// // 소멸자
// Account::~Account(void) {
//     _displayTimestamp();
//     std::cout << "index:" << this->_accountIndex << ";";
//     std::cout << "amount:" << this->_amount << ";";
//     std::cout << "closed" << std::endl;
// }

// 입금
// void Account::makeDeposit(int deposit) {
//     int p_amount = this->_amount;
//     this->_amount += deposit;
//     this->_nbDeposits++;
//     this->_totalAmount += deposit;
//     this->_totalNbDeposits++;
    
//     _displayTimestamp();
//     std::cout << "index:" << this->_accountIndex << ";";
//     std::cout << "p_amount:" << p_amount << ";";
//     std::cout << "deposit:" << deposit << ";";
//     std::cout << "amount:" << this->_amount << ";";
//     std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
// }

// // 출금
// bool Account::makeWithdrawal(int withdrawal) {
//     _displayTimestamp();
//     std::cout << "index:" << this->_accountIndex << ";";
//     std::cout << "p_amount:" << this->_amount << ";";
    
//     if (this->_amount < withdrawal) {
//         std::cout << "withdrawal:refused" << std::endl;
//         return false;
//     }
    
//     this->_amount -= withdrawal;
//     this->_nbWithdrawals++;
//     this->_totalAmount -= withdrawal;
//     this->_totalNbWithdrawals++;
    
//     std::cout << "withdrawal:" << withdrawal << ";";
//     std::cout << "amount:" << this->_amount << ";";
//     std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
//     return true;
// }

// 잔액 확인
// int Account::checkAmount(void) const {
//     return this->_amount;
// }

// // 계좌 상태 표시
// void Account::displayStatus(void) const {
//     _displayTimestamp();
//     std::cout << "index:" << this->_accountIndex << ";";
//     std::cout << "amount:" << this->_amount << ";";
//     std::cout << "deposits:" << this->_nbDeposits << ";";
//     std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
// }

// // static 멤버 함수들
// int Account::getNbAccounts(void) {
//     return _nbAccounts;
// }

// int Account::getTotalAmount(void) {
//     return _totalAmount;
// }

// int Account::getNbDeposits(void) {
//     return _totalNbDeposits;
// }

// int Account::getNbWithdrawals(void) {
//     return _totalNbWithdrawals;
// }

// void Account::displayAccountsInfos(void) {
//     _displayTimestamp();
//     std::cout << "accounts:" << getNbAccounts() << ";";
//     std::cout << "total:" << getTotalAmount() << ";";
//     std::cout << "deposits:" << getNbDeposits() << ";";
//     std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
// }

	//이 구현은 다음과 같은 특징을 가집니다:

	//static 변수들을 사용해 전체 계좌의 상태를 추적합니다
	//각 계좌는 자신의 인덱스, 잔액, 입출금 횟수를 추적합니다
	//모든 입출금 작업은 로그를 남깁니다
	//출금은 잔액이 부족하면 거부됩니다
	//타임스탬프는 문제에서 주어진 고정값을 사용합니다

	//테스트 파일의 출력과 로그 파일이 정확히 일치하도록 구현했습니다.
	
	

//*/