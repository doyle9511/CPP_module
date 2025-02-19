// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	//초기설정
	//	Account 객체들을 저장할 백터타입 정의
	typedef std::vector<Account::t>							  accounts_t;
	//	정수들을 저장할 벡터타입 정의
	typedef std::vector<int>								  ints_t;
	//	Account 벡터와 int 벡터의 반복자 쌍을 저장할 벡터타입 정의
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t;

	//계좌 초기화
	//	초기금액들
	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };
	//	배열 크기 계산
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );
	//	amounts배열로 accounts백터 초기화
	accounts_t				accounts( amounts, amounts + amounts_size );
	accounts_t::iterator	acc_begin	= accounts.begin();
	accounts_t::iterator	acc_end		= accounts.end();

	//입금데이터 초기화
	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };
	size_t const		d_size( sizeof(d) / sizeof(int) );
	//deposits벡터 초기화
	ints_t				deposits( d, d + d_size );
	ints_t::iterator	dep_begin	= deposits.begin();
	ints_t::iterator	dep_end		= deposits.end();

	//출금할 금액들
	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };
	size_t const		w_size( sizeof(w) / sizeof(int) );
	//withdrawals벡터 초기화
	ints_t				withdrawals( w, w + w_size );
	ints_t::iterator	wit_begin	= withdrawals.begin();
	ints_t::iterator	wit_end		= withdrawals.end();

	//모든 계좌 정보 표시
	Account::displayAccountsInfos();
	
	//각 계좌의 상태 표시
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	//모든 계좌에 대해 입금 실행
	for ( acc_int_t it( acc_begin, dep_begin );
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeDeposit( *(it.second) );
	}

	//입금후 상태 표시
	Account::displayAccountsInfos();

	//모든 계좌에 대해 출금 실행
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {

		(*(it.first)).makeWithdrawal( *(it.second) );
	}

	//촤종 상태 표시
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );

	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //
