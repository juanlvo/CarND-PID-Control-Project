#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;

  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  * @param double Kp proportional value
  * @param double Ki integral value
  * @param double Kd derivate value
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  * @param double cte value
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */
