#ifndef __SET_POINT_H__
#define __SET_POINT_H__

namespace sep
{
// The SetPoint object is used to apply specific temperature set points to a 
// temperature control device. The values of the heatingSetpoint and 
// coolingSetpoint attributes SHALL be calculated as follows:
//
// Cooling/Heating Temperature Set Point / 100 = temperature in degrees Celsius 
// where -273.15°C &amp;lt;= temperature &amp;lt;= 327.67°C, corresponding 
// to a Cooling and/or Heating Temperature Set Point. The maximum resolution 
// this format allows is 0.01°C. 
// 
// The field not present in a Response indicates that this field has not been 
// used by the end device. If a temperature is sent that exceeds the 
// temperature limit boundaries that are programmed into the device, the 
// device SHALL respond by setting the temperature at the limit.    
class SetPoint
{
    public:
        SetPoint (
            unsigned int cooling_set_point = 0,
            unsigned int heating_set_point = 0
        );
        ~SetPoint ();
    private:
        unsigned int cooling_set_point_;
        unsigned int heating_set_point_;
};
}; // namespace sep

#endif // __SET_POINT_H__