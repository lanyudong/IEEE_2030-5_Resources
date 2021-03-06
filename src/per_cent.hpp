#ifndef __PER_CENT_H__
#define __PER_CENT_H__

namespace sep
{
// Used for percentages, specified in hundredths of a percent, 0 - 10000. 
// (10000 = 100%)
    
class PerCent
{
    public:
        PerCent (unsigned int value);
        ~PerCent ();
    private:
        unsigned int max_percent_ = 10000;
        unsigned int value_;
};
}; // namespace
#endif // __PER_CENT_H__