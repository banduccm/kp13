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

# Plate #
The plate for this project was designed using swillkb's [Plate & Case Builder](http://builder.swillkb.com/) tool.

## Keyboard Layout ##
This layout is used by both the plate builder and the [Keyboard Layout Editor](http://www.keyboard-layout-editor.com) tool:
```
["G1","G2","G3","G4","G5","G6","G7"],
["G8","G9","G10","G11","G12","G13","G14"],
[{x:0.75,w:1.25},"G15","G16","G17","G18",{w:1.25},"G19"],
[{x:1,w:2},"G20","G21",{w:2},"G22"]
```

## Plate Shape ##
Lacking a good way to export the plate data, these are the settings:

 - Switch Type: MX{_t:3}
 - Stabilizer Type: Cherry + Costar {_s:1}
 - Case Type: None
 - Edge Padding: 3.5 (Top), 7.25(L/R), 3.15 (Bottom)
 - Plate Corners: Off _Note: I'd love to use this, but it makes the output drawing really wonky due to my removing the bottom corners_
 - Custom Polygons
    1. Cut Polygon/Custom Polygon/`[0,0]`/`[x,y];[x,y-40];[x-23,y]`
    2. Cut Polygon/Custom Polygon/`[0,0]`/`[-x,y];[-x, y-40];[-x+23,y]`
    3. Cut Polygon/Circle/3mm diameter/`[0.0]`/`[-x+4,-y+4];[x-4,-y+4];[-x+19,-y+67];[x-19, -y+67]`
 - Kerf: 0.15 (Recommended by tool)
 - Key Unit Size: Off
 - Line Color: Off
 - Line Weight: Off