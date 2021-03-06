#ifndef __SUBSCRIBABLE_RESOURCE_H__
#define __SUBSCRIBABLE_RESOURCE_H__
#include "resource.hpp"

namespace sep
{
enum class SubscribableType
{
    NO_SUBSCRIPTION,
    NON_CONDITIONAL_SUBSCRIPTION,
    CONDITIONAL_SUBSCRIPTION,
    BOTH_SUBSCRIPTIONS
};

// A Resource to which a Subscription can be requested.
class SubscribableResource
{
    public:
        SubscribableResource (
            sep::Resource* resource, 
            sep::SubscribableType* subscribable
        );
        ~SubscribableResource ();
    private:
        sep::Resource* resource_;
        sep::SubscribableType* subscribable_;
};
}; // namespace
#endif // __SUBSCRIBABLE_RESOURCE_H__