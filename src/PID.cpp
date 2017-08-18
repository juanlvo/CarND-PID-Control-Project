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

	this.Kp = Kp;
	this.Ki = Ki;
	this.kd = kd;

	this.p_error = 0.0;
	this.i_error = 0.0;
	this.d_error = 0.0;

}

/*
* Update the PID error variables given cross track error.
* @param double cte value
*/
void PID::UpdateError(double cte) {

	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;
}

double PID::TotalError() {

}

/**
 *  x_trajectory = []
    y_trajectory = []
    prev_cte = robot.y
    int_cte = 0
    for i in range(n):
        cte = robot.y
        diff_cte = cte - prev_cte
        prev_cte = cte
        int_cte += cte
        steer = -tau_p * cte - tau_d * diff_cte - tau_i * int_cte
        robot.move(steer, speed)
        x_trajectory.append(robot.x)
        y_trajectory.append(robot.y)
    return x_trajectory, y_trajectory
 */
