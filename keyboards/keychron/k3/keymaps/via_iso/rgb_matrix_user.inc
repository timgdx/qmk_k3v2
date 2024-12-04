RGB_MATRIX_EFFECT(SOLID_WHITE)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

static bool SOLID_WHITE(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);
  uint8_t color = (rgb_matrix_config.hsv.v * 0xff) / 255;
  for (uint8_t i = led_min; i < led_max; i++) {
    RGB_MATRIX_TEST_LED_FLAGS();
    rgb_matrix_set_color(i, color, color, color);
  }
  return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS