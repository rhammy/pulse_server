#include "Publisher.hpp"
#include <stdexcept>

// Notify all subscribers of a data update.
void Publisher::notify() const {
    if(_subscribers.empty()) return;
    for(auto& subscriber : _subscribers) {
        subscriber->update();
    }
}

// Attach a new subscriber.
void Publisher::attach(Subscriber* subscriber) {
    auto iter = _subscribers.find(subscriber);
    if(iter != _subscribers.end()) {
        throw std::runtime_error("Error: Subscriber already attached.");
    }
    else {
        _subscribers.insert(subscriber);
    }
}

// Remove existing subscriber.
void Publisher::detach(Subscriber* subscriber) {
    auto iter = _subscribers.find(subscriber);
    if(iter == _subscribers.end()) {
        throw std::runtime_error("Error: Subscriber is not attached.");
    }
    else {
        _subscribers.erase(subscriber);
    }
}