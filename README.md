# Keypad #

This is an attempt to design a serviceable replacement the long-discontinued G13 "gameboard".

## PCB ##

The PCB design depends on symbols from a few libraries:

- <https://github.com/stormbard/Keyboard.pretty> for the hotswap switch footprints
- <https://github.com/drewgates/kb2040-kicad> for the Adafruit KB2040 footprint, symbol, and step file
- <https://grabcad.com/library/kailh-hotswap-mx-1> for the hot-swap socket step file (requires registration)

### Board Layout ###

The G13 had 22 "G" keys, 2 thumb keys, and an analog stick with a click (in addition to some other buttons not
important to this effort).

This initial project contains the main board with 22 keys and 2 pushbuttons intended to be used to switch
layers in QMK. It also includes a header with 2 rows and 6 columns for an expansion board (i.e, the thumb
buttons).

The KB2040 was selected due to easy availability, compatibility with the Pro Micro pinout, and a USB-C port.
Other Pro Micro-compatible boards may work, but take care to skip the D+/D- pins from the KB2040.

## Plates ##

The switch mounting plates for this project were initially designed using swillkb's
[Plate & Case Builder](http://builder.swillkb.com/) tool, then imported into qcad for manipulation.

Experimental baseplates for both the keypad and full-size thumb pod are included, as are 3d-printable spacers
to sit between the plates and PCB.

### Keyboard Layout ###

This layout is used by both the plate builder and the
[Keyboard Layout Editor](http://www.keyboard-layout-editor.com) tool:

```text
["G1","G2","G3","G4","G5","G6","G7"],
["G8","G9","G10","G11","G12","G13","G14"],
[{x:0.75,w:1.25},"G15","G16","G17","G18",{w:1.25},"G19"],
[{x:1,w:2},"G20","G21",{w:2},"G22"]
```

 ## Parts ##

 For the first build, the following parts were used:

 ### Plate ###

 The place was ordered from [SendCutSend](https://sendcutsend.com/) in 1.6mm thick 5051 Aluminum.

 ### Electronics ###

 Initial parts were ordered from Adafruit:

- 30x [1N4148 diodes](https://www.adafruit.com/product/1641)
- 20x [6mm Tactile Button switch](https://www.adafruit.com/product/367)
- 40x [Kailh Switch Sockets for MX-compatible Mechanical Keys](https://www.adafruit.com/product/4958)
- 30x [Kailh Mechanical Key Switches - Linear Black](https://www.adafruit.com/product/4953)
- 1x [Adafruit KB2040](https://www.adafruit.com/product/5302)
- ~~1x [GMK Screw-in Stabilizers](https://1upkeyboards.com/shop/parts-and-tools/parts/gmk-screw-in-stabilizers/)~~ _Note: These ended up being incompatible with the plate, see v0.1.0 notes_
- 1x [Durock Plate Mount Stabilizers](https://1upkeyboards.com/shop/parts-and-tools/parts/durock-plate-mount-stabilizers-60-tkl-piano/)

### PCB ###

The PCB was ordered from PCBWay using their Kicad plugin.

## Version Notes ##

### v0.1.0 ###

Generally good news! The parts all fit as expected and the circuit works as designed. No reworks required to
have a functioning 22-key setup.

- The plate is not compatible with the PCB-mount stabilizers.
- The angle on the plate and the angle on the PCB are not the same. This is annoying, but not a functional
 problem.
- n-key rollover works (as expected), but note that QMK defaults to 6KRO. The default keymap uses switch C0
 on Layer 0 to toggle it.

### v0.1.1 ###

Instead of relying on trying to rely on external tools, all the mechanical bits were re-drawn in qcad, which
helpfully makes it extremely simple to import an exported .dxf from KiCAD for tracing and fit checking. The
stabilizer compatibility was not addressed (yet), but at least the angle between the PCB and plate(s) now
aligns.

## v0.2.0 Wishlist ##


During the mechanical design phase, some items were added as a wishlist for a potential second spin of the
"big" board:

- Smaller, optimized thumb-pod connector. Considering using a 1.27mm pitch 10-pin cable (Cortex-M SWD
  connector) to reduce mechanical size.
- Figure out how to use the kb2040's castellated pins to reduce z-height

## Thumb Pods ##

The thumb pod(s) incorporate a 4-way (with diagonals!) thumbstick and 0-4 buttons. There are 2 different
versions: regular (4x 1U MX switch, 1x thumbstick) and mini (2x microswitch, 1x thumbstick). The thumbstick
uses the same matrix positions on each version, so it is possible to populate multiple pods and swap between
them as desired.

The pods feature a notched edge for mounting square against the keypad PCB (or a case holding it). This
ensures the A/B/C/D positions of the thumbstick are square with the keypad.

### Thumbstick ###

- [ALPS RKJXM1015004](https://tech.alpsalpine.com/e/products/detail/RKJXM1015004/)

This thumbstick has 4 switches and can handle diagonal movements as well. It has a "stick click", but this
is not broken out as a dedicated pin, so it's unclear if it is compatible with QMK. In v0.1 of the thumb
pods, the "push" pins are not connected to the key matrix. The "push" pins _are_ on their own net, however,
so they could be hand-wired into the matrix if desired. The same thumbstick is used for both thumb pod
designs.

### Thumb Pod (full size) ###

The regular thumb pod uses the same MX hot-swap sockets and 1U keys as the main keypad to provide 4 switches
surrounding the thumbstick.

Experimental top and bottom plates are provided for the full-size thumb pod.

### Thumb Pod Mini ###

The mini thumb pod closely approximates the original G13 thumb section: two mouse-like microswitches and the
thumbstick. This version will require some sort of housing, as it's not really feasible to hit microswitch
actuators.

#### Electronics ####

- [Kailh GM Microswitch](https://www.kailhswitch.com/micro-switches/mouse-micro-switches/high-click-life-gaming-micro-mouse-switch.html)