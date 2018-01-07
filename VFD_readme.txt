VFD_readme

Power
===========

Our Arduino sketches are written to save power. This is not typical of most 
Arduino examples for working with LCD/VFD displays. 

Since the display is smart and has it's own controller, it is not necessary to 
rewrite the display on every loop of the sketch.  In the hello world example,
extra code is included to only write to the display when the data changes.  In
the simple message example, a message is written and the Arduino is placed in 
sleep mode.  It is actually possible to disconnect the Arduino from the display 
at that point as long as power it maintained to the display.

For periodic updates and taking advantage of power save modes, the display can 
be powered by the arduino onboard regulator. You should monitor your board 
during development to make sure it isn't getting too hot.

Under heavy use while constantly updating, the power draw of the display may 
overheat the regulator on the DigiSpark Pro, so if this occurs, a heat sink 
would have to be added or an external power source used (recommended) for 
continuous use. 

We've run these sketches for many hours without overheat, but your mileage may
vary.

LCD Library
============

These examples use 4-bit mode and work with the pinouts displayed in the 
schematic.  They use the Arduino LiquidCrystal library to control the display.
This display is pin compatible with the HD44780 LCD display.

Noise
============

If you get garbled messages on the display, it is an indication of crosstalk 
noise on the data lines.  Since the pin jumpers typically used with Arduino 
development are not shielded, when high speed serial data is sent over the 
wires, it can cause some radio interference on nearby data lines.  The RS 
and Enable lines should be physically separated from each other to reduce 
noise.  We selected pins separated from each other for this purpose.  If 
you are using a different board, select pins as far from each other as 
possible.  

You can also use shielded wire with the shield connected to ground to 
prevent crosstalk.  Small clip on ferrites may also dampen crosstalk.  



