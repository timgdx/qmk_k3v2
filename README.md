# Keychron K3v2 RGB Optical ISO (SN32F248B)
Custom [SonixQMK](https://sonixqmk.github.io//SonixDocs/) firmware for Keychron K3v2 RGB Optical ISO based off of [`keyboards/keychron/k3`](https://github.com/SonixQMK/qmk_firmware/tree/sn32_master/keyboards/keychron/k3).<br>
As with any SonixQMK firmware, bluetooth is NOT supported.

Features:
- [VIA](https://usevia.app/) support
- 1000Hz polling rate
- 0ms debounce
- Layer with lighting key disabled

## Lighting key
To disable the pesky lighting key set the OS switch (on the back of the keyboard) to Mac/iOS.<br>
Mac/iOS specific actions are not supported.

## FN Keymap
F1-F12 are the same as stock.
>__FN+Esc__: Boot mode<br>
__FN+Light__: Toggle backlight<br>
__FN+PageUp__: Set backlight to white<br>
__FN+Right/Left__: Increase/decrease hue<br>
__FN+Up/Down__: Increase/decrease saturation<br>
__FN+Home/End__: Increase/decrease animation speed<br>
__FN+R__: Reset RGB changes<br>
__FN+PrntScr__: Windows snippet tool


# Flashing
> [!CAUTION]
> Read the instructions very carefully as any mistake could render your keyboard unusable. Do this at your own risk.<br>
Follow the instructions on [4. Flashing the Firmware](https://sonixqmk.github.io//SonixDocs/install/#4-flashing-the-firmware) with the compiled [`keychron_k3_rgb_optical_iso_via_iso.bin`](keychron_k3_rgb_optical_iso_via_iso.bin) file.

# Making changes
1. Install [SonixQMK](https://sonixqmk.github.io//SonixDocs/install/#2-setup-qmk-enviroment)
2. Move the directory `keyboards` to the cloned SonixQMK repository.
3. Make your changes.
4. Compile with `qmk compile -kb keychron/k3/rgb/optical_iso -km via_iso`
