#ifndef MANAGER_H
#define MANAGER_H

#include "person.h"

class Manager : public Person {
public:
    Manager(const QString& email, const QString& password, const QString& role);
    bool canLogin() const override;
};

#endif // MANAGER_H
