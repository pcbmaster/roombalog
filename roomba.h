#pragma once

enum motorCurrents {
  int left,
  int right,
  int brush,
  int vac,
  int sideBrush
};

enum wheelData {
  bool bumpLeft,
  bool bumpRight,
  bool dropLeft,
  bool dropCaster,
  bool dropRight
};

enum cliff {
  bool left,
  bool frontLeft,
  bool rightLeft,
  bool right
};

enum sensorData {
  bool bumper,
  wheelData wheels,
  motorCurrents motors,
  cliff cliffs,
  bool wall,
  bool vwall,
  bool dirtLeft,
  bool dirtRight,
  int vbatt,
  int tbatt,
  int current
};

class Roomba {
 public:
  sensorData Sensors;
  void doCommand(string* arg);
  void motor(int motor, bool on);
  void drive(int velocity, int radius);
 private:
  FILE *port;
};
