# Keypad #
This is an attempt to design a serviceable replacement the long-discontinued G13 "gameboard".

## PCB ##
The PCB design depends on symbols from a few libraries:

 - https://github.com/stormbard/Keyboard.pretty for the hotswap switch footprints
 - https://github.com/g200kg/kicad-lib-arduino for the Sparkfun Pro Micro footprint + symbol
 - https://grabcad.com/library/kailh-hotswap-mx-1 for the hot-swap socket step file (requires registration)

### Board Layout ###
The G13 had 22 "G" keys, 2 thumb keys, and an analog stick with a click (in addition to some other buttons not important to this effort).

This initial project contains the main board with 22 keys and 2 pushbuttons intended to be used to switch layers in QMK. It also includes a header with 2 rows and 6 columns for an expansion board (aka, the thumb buttons).

The plan is to use a Maple Elite-C instead of a Pro Micro, but the pinouts are identical so the Pro Micro footprint works for now. If the QMK proton-C ever gets restocked, it would be nice to switch to that.