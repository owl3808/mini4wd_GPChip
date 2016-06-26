class MotorCtrl {
 public:
  MotorCtrl(int, int, int);
  void run(void);
  void motor_set_speed(int);
  void motor_stop(void);
  int enablePin;
  int PinA;
  int PinB;
};

