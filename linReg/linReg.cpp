#include "linReg.h"

float learnRate;

Perceptron::Perceptron(float W_init, float b_init){
  W = W_init;
  b = b_init;
}

void Perceptron::calcOut(){
  out = W*in + b;
}

float Perceptron::getW(){
  return W;
}

float Perceptron::getb(){
  return b;
}

void Perceptron::updateParams(float W_grad, float b_grad){
  W -= W_grad*learnRate;
  b -= b_grad*learnRate;
}

float normalDistr(float mean, float stdev){
  random_device rd;
  mt19937 gen(rd());
  normal_distribution<float> d(mean, stdev);
  return d(gen);
}

float partialW(float x, float y, float f){
  //return -1*(f - y)*x;
  return (f - y)*x;
}

float partialB(float y, float f){
  //return -1*(f-y);
  return (f - y);
}

void changeLearnRate(float newRate){
  learnRate = newRate;
}
