# Arduino Fio project

This project is for the development and testing of the arduino fio board variants. Specifically the purpose is to build a ultra low power firmware that can be awoken by an interrupt triggered by an onboard radio. The Xbee is the intended radio but other compatible radios are potentially going to be supported.

Currently there are two variants of the fio using different generations of processors
[Legacy: atmega328p](https://www.sparkfun.com/products/10116)
[current: atmega32u4](https://www.sparkfun.com/products/11520)

The important characteristics include the low power (sleep) mode for these chips and the swap-able interface for (xbee/Lora) radios.

## Links, references and tutorials

<http://www.semifluid.com/2012/09/07/arduino-fio-low-power-setup/>
<https://forum.sparkfun.com/viewtopic.php?t=36199>
<http://www.fiz-ix.com/2012/11/low-power-xbee-sleep-mode-with-arduino-and-pin-hibernation/>
<https://gist.github.com/OrganicIrradiation/b31a6699d3f7c41a9ae2>
<https://electronics.stackexchange.com/questions/33397/how-to-make-xbee-sleep>
<https://docs.sensestage.eu/sensestage-v1/minibee-diy-use-your-own-arduino-and-xbee>
<http://www.geeetech.com/wiki/index.php/Arduino_Fio>
<http://www.engblaze.com/hush-little-microprocessor-avr-and-arduino-sleep-mode-basics/>
<http://tinkerman.cat/weather-station/>

<https://www.arduino.cc/en/Main/ArduinoBoardFioProgramming>
<https://www.arduino.cc/en/Main/ArduinoBoardFioTips>
<https://www.arduino.cc/en/Hacking/Bootloader?from=Tutorial.Bootloader>
