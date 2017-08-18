#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

/*
* Initialize PID.
* @param double Kp proportional value
* @param double Ki integral value
* @param double Kd derivate value
*/
void PID::Init(double Kp, double Ki, double Kd) {

	this->Kp = Kp;
	this->Ki = Ki;
	this->Kd = Kd;

	this->p_error = 0.0;
	this->i_error = 0.0;
	this->d_error = 0.0;

}

/*
* Update the PID error variables given cross track error.
* @param double cte value
*/
void PID::UpdateError(double cte) {

	this->d_error = cte - this->p_error;
	this->p_error = cte;
	this->i_error += cte;
}

/*
* Calculate the total PID error.
*/
double PID::TotalError() {
	return this->Kp * this->p_error + this->Ki * this->i_error + this->Kd * this->d_error;
}
