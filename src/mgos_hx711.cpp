#include "mgos.h"
#include "mgos_hx711.h"


HX711_ADC *mgos_hx711_create(uint8_t dout, uint8_t sck) {
  return new HX711_ADC(dout, sck);
}

void mgos_hx711_set_gain(HX711_ADC *hx, uint8_t gain) {
  if (hx == nullptr) return;
  return hx->setGain(gain);
}

void mgos_hx711_begin(HX711_ADC *hx) {
  if(hx == nullptr) return;
  return hx->begin();
}

int mgos_hx711_start(HX711_ADC *hx, unsigned int t) {
  if(hx == nullptr) return 0;
  return hx->start(t);
}

int mgos_hx711_start_multiple(HX711_ADC *hx, unsigned int t) {
  if(hx == nullptr) return 0;
  return hx->startMultiple(t);
}

void mgos_hx711_tare(HX711_ADC *hx) {
  if(hx == nullptr) return;
  return hx->tare();
}

void mgos_hx711_tare_no_delay(HX711_ADC *hx) {
  if(hx == nullptr) return;
  return hx->tareNoDelay();
}

bool mgos_hx711_get_tare_status(HX711_ADC *hx) {
  if(hx == nullptr) return 0;
  return hx->getTareStatus();
}

void mgos_hx711_set_cal_factor(HX711_ADC *hx, float cal) {
  if(hx == nullptr) return;
  return hx->setCalFactor(cal);
}

float mgos_hx711_get_cal_factor(HX711_ADC *hx) {
  if(hx == nullptr) return 0;
  return hx->getCalFactor();
}

float mgos_hx711_get_data(HX711_ADC *hx) {
  if(hx == nullptr) return 0;
  return hx->getData();
}

int mgos_hx711_get_read_index(HX711_ADC *hx) {
  if(hx == nullptr) return 0;
  return hx->getReadIndex();
}


float mgos_hx711_get_conversion_time(HX711_ADC *hx) {
  if(hx == nullptr) return 0.0;
  return hx->getConversionTime();
}					

float mgos_hx711_get_SPS(HX711_ADC *hx) {
  if(hx == nullptr) return 0.0;
  return hx->getSPS();
}				

bool mgos_hx711_get_tare_timeout_flag(HX711_ADC *hx) {
  if(hx == nullptr) return 0;
  return hx->getTareTimeoutFlag();
}

void mgos_hx711_disable_tare_timeout(HX711_ADC *hx) {
  if(hx == nullptr) return;
  return hx->disableTareTimeout();
}

long mgos_hx711_get_settling_time(HX711_ADC *hx) {
  if(hx == nullptr) return 0;
  return hx->getSettlingTime();
}

void mgos_hx711_power_down(HX711_ADC *hx) {
  if(hx == nullptr) return;
  return hx->powerDown();
}

void mgos_hx711_power_up(HX711_ADC *hx) {
  if(hx == nullptr) return;
  return hx->powerUp();
} 							



// bool mgos_empty_init(void) {
//   return true;
// }
