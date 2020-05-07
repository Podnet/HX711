#include "mgos.h"
#include "mgos_hx711.h"


HX711_ADC *mgos_hx711_create(uint8_t dout, uint8_t sck) {
  return new HX711_ADC(dout, sck);
}

void mgos_hx711_set_gain(HX711_ADC *hx, uint8_t gain) {
  if (hx == nullptr) return;
  return hx->setGain(gain);
}


// bool mgos_empty_init(void) {
//   return true;
// }
