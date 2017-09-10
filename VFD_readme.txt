VFD_readme

For periodic updates and taking advantage of power save modes, the display can 
be powered by the arduino onboard regulator. You should monitor your board 
during development to make sure it isn't getting too hot.

Under heavy use, the power draw of the display may overheat the regulator on the 
DigiSpark Pro, so if this occurs, a heat sink would have to be added or an 
external power source used (recommended) for continous use.  The schematic 
shows how to wire an external 5V supply to power the DigiSpark and the VFD 
without USB.

We've run these sketches for many hours without overheat, but your mileage may
vary.

These examples use 4-bit mode and work with the pinouts displayed in the 
schematic.  They use the Arduino LiquidCrystal library to control the display.
This display is pin compatible with the HD44780 LCD display.
