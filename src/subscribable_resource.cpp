#include "subscribable_resource.hpp"

namespace sep
{
SubscribableResource::SubscribableResource(
    sep::Resource* resource, 
    sep::SubscribableType* subscribable) 
{
    resource_ = resource;
    subscribable_ = subscribable;
}

SubscribableResource::~SubscribableResource() 
{
    delete resource_;
    delete subscribable_;
}
} // namespace