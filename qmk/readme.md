# QMK / VIA Files

This is a cache of the files used with QMK to build a valid firmware, and with VIA to use the editor.

The most correct places for these would be in their respective upsteam projects, or in a fork of them, but for
the sake of ensuring nothing gets lost before that happens, they are stored here as well.

## QMK

The `/keyboards/banduccm/kp13/` directory can be copied directly into the top-level `qmk_firmware` directory.
Firmware can then be built by running `qmk compile -kb banduccm/kp13 -km [default|via]` and flashed using the
kb2040's U2F bootloader.

## VIA

At <https://usevia.app/>, enable the "Design" tab in settings, then load `kp13.json` from the `via` directory
to enable editing.