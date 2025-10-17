#ifndef PUBLISHER_H
#define PUBLISHER_H

#include "Subscriber.hpp"
#include <memory>
#include <unordered_set>

// Observerable class
class Publisher {
public:
    void notify() const;
    void attach(Subscriber* subscriber);
    void detach(Subscriber* subscriber);
private:
    std::unordered_set<Subscriber*> _subscribers;
};

#endif // PUBLISHER_H