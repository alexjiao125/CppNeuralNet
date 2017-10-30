#include <iostream>
#include <stdlib.h>
#include <string>
#include <random>
#include <cmath>
using namespace std;

extern float learnRate;

class Perceptron{
public:
  Perceptron(float, float);   //initial arguments will be W and b, normally distr.
  void updateParams(float, float);  //will take gradients as arg
  void calcOut();
  float getW();
  float getb();
  float in;
  float out;
private:
  float W;
  float b;
};

float normalDistr(float, float);
float partialW(float, float, float); //args: x,y,f(x)
float partialB(float, float);         //args: y,f(x)
void changeLearnRate(float);
