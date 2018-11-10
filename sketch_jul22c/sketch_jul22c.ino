#include <pt.h>
#define PT_DELAY(pt, ms, ts)\
    ts = millis();\
    PT_WAIT_WHILE(pt, millis()-ts < (ms));
#define LED1 3
#define LED2 6
struct pt pt_task1;
struct pt pt_task2;

void setup() {
  

}

void loop() {
  

}

PT_THREAD(task1(struct pt*pt)){
  static uint32_t ts;
  PT_BEGIN(pt);
  while(1){
    Serial.println("task1");
    PT_DELAY(pt, 1000, ts);
  }
  PT_END(pt);
}

