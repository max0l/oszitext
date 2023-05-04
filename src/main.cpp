#include <Arduino.h>
#define y PORTC
#define x PORTB

//MAX
//#define how_many_vertices 15
//byte x_axis[how_many_vertices] = {1, 1, 2, 3, 3, 4, 5, 6, 7, 8, 7, 8, 9, 8, 9};
//byte y_axis[how_many_vertices] = {1,3,2,3,1,1,3,1,1,2,3,2,3,2,1};
#define how_many_vertices 56
byte x_axis[how_many_vertices] = {7,7,8,8,9,9,10,10,9,9,8,8,7,8,8,9,9,12,12,11,11,14,14,13,13,12,16,15,16,17,18,19,20,21,20,19,18,17,16,17,18,19,22,22,23,23,24,25,25,24,25,25,24,23,23,22};
byte y_axis[how_many_vertices] = {7,15,15,12,12,15,15,7,7,10,10,7,7,7,10,10,7,7,13,13,15,15,13,13,7,7,7,15,15,12,13,12,15,15,7,7,10,7,7,7,10,7,7,15,15,12,15,15,14,11,8,7,7,10,7,7};


void setup() {
  //DDRC 
  //DDRB 
  //are the Ports where we will wirte sequencially
  DDRB = B00111111;
  DDRC = B00111111;
  Serial.begin(9600);
}

void loop() {
  unsigned char loopcount;

  for(loopcount = 0; loopcount < how_many_vertices; loopcount++) {
    x = x_axis[loopcount]*2;
    y= y_axis[loopcount]*2;
  }
}