#ifndef GUARD_H
#define GUARD_H

#include "person.h"
#include <QTime>

class Guard : public Person {
public:
    Guard(const QString& email, const QString& password, const QString& role);

    bool canLogin() const override;
};

#endif // GUARD_H
