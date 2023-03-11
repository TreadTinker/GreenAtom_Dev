#include <time.h>
#include <iostream>
#include <string>
#include "returnRepayment.h"
#pragma once

using namespace System;

ref class rel_sum
{
	private:
		float sum_zaim;

	public:
		static double SummaryZaim(double sum_zaim, double percent, DateTime date_start, DateTime date_end) {
			double sum_percent = 0;
			int days = 0;


			TimeSpan diff = (date_end - date_start);
			//
			//
			days = diff.Days + 1;

			sum_percent = (sum_zaim * days * percent) / 100 / 365;

			return round(sum_percent * 100) / 100;

		}
		// ïðîâåðêà 
		static void ErrorTest(double summ, double percent) {
			if (summ < 1.00 && summ > 1000000.00) {
			}
			if (percent < 0.01 && percent > 30.00) {
			}
		}
		//
		// Ðàñ÷åò ïðîöåíòîâ ïî çàéìó ñ èçìåíåíèåì ïðîöåíòíîé ñòàâêè
		//
		static double ChangePercentZaim(double sum_zaim, double percent, double percent_new, DateTime date_start, DateTime date_end, DateTime new_date) {
			//
			// Îáúÿâëåíèå ïåðåìåíûõ
			//
			double summ_percent = 0, days1 = 0, days2 = 0, percent1 = 0, percent2 = 0;

			percent1 = percent;
			percent2 = percent_new;


			TimeSpan diff1 = (new_date - date_start);

			days1 = diff1.Days;
			std::cout << days1 << std::endl;

			TimeSpan diff2 = (date_end - new_date);

			days2 = diff2.Days+1;
			std::cout << days2 << std::endl;

			summ_percent = sum_zaim * (days1 * percent1 + days2 * percent2) / 100 / 365;


			return round(summ_percent * 100) / 100;
		}
		//
		// Ðàñ÷åò ïðîöåíòîâ ñ äîñðî÷íûì ïîãàøåíèåì
		// 
		//
		static returnRepayment EarlyRepaymentZaim(double sum_zaim, double percent, double new_percent, double repayment_summ, DateTime date_start, DateTime date_end, DateTime date_change, DateTime repayment_date) {
			double summ_percent = 0, summ1 = 0, summ2 = 0, summ3 = 0, percent1 = 0, percent2 = 0, repayment = 0;
			int days1 = 0, days2 = 0, days3 = 0;

			percent1 = percent;
			percent2 = new_percent;

			repayment = sum_zaim - repayment_summ;

			//
			// Different DateTime
			//
			TimeSpan diff1 = date_change - date_start;
			TimeSpan diff2 = repayment_date - date_start;
			TimeSpan diff3 = repayment_date - date_change;
			TimeSpan diff4 = date_change - repayment_date;
			TimeSpan diff5 = date_end - repayment_date;
			TimeSpan diff6 = date_end - date_change;
			//
			// Öåïî÷êè âåòâëåíèé 
			//
			if (repayment_date >= date_change) {
				// //Êîëè÷åñòâî äíåé 1
				days1 = diff1.Days - 1;
				// // Êîëè÷åñòâî äíåé 2
				days2 = diff3.Days + 1;
				// // Êîëè÷åñòâî äíåé 3
				days3 = diff5.Days;
			}
			else {
				// //Êîëè÷åñòâî äíåé 1
				days1 = diff2.Days;
				// // Êîëè÷åñòâî äíåé 2
				days2 = diff4.Days - 1;
				// // Êîëè÷åñòâî äíåé 3
				days3 = diff6.Days + 1;
			}

			summ1 = sum_zaim * days1 * percent / 100 / 365;
		
			if (repayment_date >= date_change) {
				summ2 = sum_zaim * days2 * percent2 / 100 / 365;
			}
			else {
				summ2 = (sum_zaim - repayment_summ) * days2 * percent / 100 / 365;
			}

			summ3 = (sum_zaim - repayment_summ) * days3 * percent2 / 100 / 365;

			summ_percent = summ1 + summ2 + summ3;

			returnRepayment temp;
			temp.SetSumm_Percent(summ_percent);
			temp.SetRepayment(repayment);
			return returnRepayment;			
		}
};

