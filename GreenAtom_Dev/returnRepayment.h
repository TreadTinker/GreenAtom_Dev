#pragma once

class returnRepayment {
public:
	returnRepayment() {
		this->Summ_Percent = 0;
		this->Repayment = 0;
	}
	returnRepayment(double Summ_Percent, double Repayment = 0) :
		Summ_Percent(Summ_Percent), Repayment(Repayment) {}
	returnRepayment(const returnRepayment& right) :
		Summ_Percent(right.Summ_Percent), Repayment(right.Repayment) {}
	double GetSumm_Percent()const { return this->Summ_Percent; }
	double GetRepayment()const { return this->Repayment; }
	void SetSumm_Percent(double Summ_Percent) { this->Summ_Percent = Summ_Percent; }
	void SetRepayment(double Repayment) { this->Repayment = Repayment; }
private:
	double Summ_Percent = 0;
	double Repayment = 0;
};

