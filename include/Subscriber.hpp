#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

// We are going to go with observer observable architecture here.
// Observer class
class Subscriber {

public:
    // Virtual function to be implemented by inherited classes.
    virtual void update() = 0;
};

#endif // SUBSCRIBER_H