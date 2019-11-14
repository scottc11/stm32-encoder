# stm32-encoder

Simple encoder library for handling a *quadrature rotary encoder* with an `STM32F103C8` MCU. 

Currently the library only handles encoders that produce two ticks per `dedent`.

## Usage:
```
#include "Encoder.h"

Encoder_Config();  // configure the encoders timer
Encoder_Init();    // start the encoders timer

Encoder_Status encoderStatus;

int main(void) {
  encoderStatus = Encoder_Get_Status();

  switch(encoderStatus) {
    case Incremented:
      // do something
      break;
    case Decremented:
      // do something else
      break;
    case Neutral:
      // don't do anything
      break;
  }
}

```