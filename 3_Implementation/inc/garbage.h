#ifndef __GARBAGE_H__
#define __GARBAGE_H__
#define trigpin 6
#define echopin 5
int led1 = A0;
int led2 = A1;
int led3 = A2;
int led4 = A3;
int led5 = A4;
void setup();
void loop(int duration, int distance);
#endif /** __GARBAGE_H_ */
