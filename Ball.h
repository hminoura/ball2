#pragma once
#include "Timer.h"
#include <SFML/Graphics.hpp>

class Ball {
 public:
  double x, y;
  double vx, vy;
  double ax, ay;

  double theta;
  double vtheta;

  Timer timer;
  Timer rap;

  double life;

  sf::Image image;
  sf::Texture texture;
  sf::Sprite sprite;

  enum class MOTION {
    REFRECTION,
    BOUND,
    STOP
  };

  MOTION motion;

  Ball();
  ~Ball();

  void init();
  void update();
  void draw();
  void clean();

  void motionRefrection();
  void motionBound();
  void motionStop();
};
