#ifndef INPUT_H
#define INPUT_H

#include "Arduino.h"
#include "Button.h"
#include "RTC.h"
#include "Vector.h"
#include "Row.h"

class Button;

class Input
{
  public:
    Input();
    void Init(Vector<Row*> rows, RTC *rtc, int buttonOnePin, int buttonTwoPin);
    void TakeInput();

    static void toggleSet(Input* input);
    static void changeRow(Input* input);
    static void increaseTimeValue(Input* input);

    Vector<Row*> rows;
    RTC *rtc;
    Button *buttonOne;
    Button *buttonTwo;
};

#endif // INPUT_H