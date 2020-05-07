#include "HX711_ADC.h"

#ifdef __cplusplus
extern "C"
{
#endif

//constructor
HX711_ADC *mgos_hx711_create(uint8_t dout, uint8_t sck);

//value must be 32, 64 or 128*
void mgos_hx711_set_gain(HX711_ADC *hx, uint8_t gain = 128); 

//set pinMode, HX711 gain and power up the HX711
void mgos_hx711_begin(HX711_ADC *hx);

//set pinMode, HX711 selected gain and power up the HX711
void mgos_hx711_begin(HX711_ADC *hx, uint8_t gain);

//start HX711 and do tare 
int mgos_hx711_start(HX711_ADC *hx, unsigned int t); 					

//start HX711, do tare if selected
int mgos_hx711_start(HX711_ADC *hx, unsigned int t, bool dotare);		

//start and do tare, multiple HX711 simultaniously
int mgos_hx711_start_multiple(HX711_ADC *hx, unsigned int t);

//start and do tare if selected, multiple HX711 simultaniously
int startMultiple(HX711_ADC *hx, unsigned int t, bool dotare);

//zero the scale, wait for tare to finnish (blocking)
void tare(HX711_ADC *hx); 								

//zero the scale, initiate the tare operation to run in the background (non-blocking)
void tareNoDelay(HX711_ADC *hx); 						

//returns 'true' if tareNoDelay() operation is complete
bool getTareStatus(HX711_ADC *hx);						

//set new calibration factor, raw data is divided by this value to convert to readable data
void setCalFactor(HX711_ADC *hx, float cal); 				

//returns the current calibration factor
float getCalFactor(HX711_ADC *hx); 						

//returns data from the moving average dataset 
float getData(HX711_ADC *hx); 							

//for testing and debugging
int getReadIndex(HX711_ADC *hx); 						

//for testing and debugging
float getConversionTime(HX711_ADC *hx); 					

//for testing and debugging
float getSPS(HX711_ADC *hx);								

//for testing and debugging
bool getTareTimeoutFlag(HX711_ADC *hx);					

//for testing and debugging
void disableTareTimeout(HX711_ADC *hx);					

//for testing and debugging
long getSettlingTime(HX711_ADC *hx);						

//power down the HX711
void powerDown(HX711_ADC *hx); 							

//power up the HX711
void powerUp(HX711_ADC *hx); 							

//get the tare offset (raw data value output without the scale "calFactor")
long getTareOffset(HX711_ADC *hx);						

//set new tare offset (raw data value input without the scale "calFactor")
void setTareOffset(HX711_ADC *hx, long newoffset);			

//if conversion is ready; read out 24 bit data and add to dataset
uint8_t update(HX711_ADC *hx); 							

//overide number of samples in use
void setSamplesInUse(HX711_ADC *hx, int samples);			

//returns current number of samples in use
int getSamplesInUse(HX711_ADC *hx);						

//resets index for dataset
void resetSamplesIndex(HX711_ADC *hx);					

//Fill the whole dataset up with new conversions, i.e. after a reset/restart (this function is blocking once started)
bool refreshDataSet(HX711_ADC *hx);						

//returns 'true' when the whole dataset has been filled up with conversions, i.e. after a reset/restart
bool getDataSetStatus(HX711_ADC *hx);					

//returns and sets a new calibration value (calFactor) based on a known mass input
float getNewCalibration(HX711_ADC *hx, float known_mass);	

//returns 'true' if it takes longer time then 'SIGNAL_TIMEOUT' for the dout pin to go low after a new conversion is started
bool getSignalTimeoutFlag(HX711_ADC *hx);				


#ifdef __cplusplus
}
#endif  /* __cplusplus */