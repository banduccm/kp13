# keypad

This is an attempt to design a serviceable replacement the long-discontinued G13 "gameboard".

* Keyboard Maintainer: [Mike Banducci](https://github.com/banduccm)
* Hardware Supported:
    * [Adafruit KB2040](https://www.adafruit.com/product/5302)
    * [Custom PCB](https://bitbucket.org/banduccm/keypad/src/master/)

Build example for this keyboard (after setting up your build environment):
```
qmk compile -kb keypad -km default
```

Flashing example for this keyboard:
```
qmk flash -kb keypad -km default
```


See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
