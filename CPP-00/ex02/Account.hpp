/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfilloux <lfilloux@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:57:24 by lfilloux          #+#    #+#             */
/*   Updated: 2022/05/19 15:12:00 by lfilloux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ACCOUNT_H__
# define __ACCOUNT_H__

class Account
{
	public:
		typedef Account		t;

		static int	getNbAccounts ();
		static int	getTotalAmount ();
		static int	getNbDeposits ();
		static int	getNbWithdrawals ();
		static void	displayAccountsInfos ();

		Account (int initial_deposit);
		~Account ();

		void	makeDeposit (int deposit);
		bool	makeWithdrawal (int withdrawal);
		int		checkAmount () const;
		void	displayStatus () const;

	private:
		static int	_nbAccounts;
		static int	_totalAmount;
		static int	_totalNbDeposits;
		static int	_totalNbWithdrawals;

		static void	_displayTimestamp ();

		int				_accountIndex;
		int				_amount;
		int				_nbDeposits;
		int				_nbWithdrawals;

		Account ();
};

#endif