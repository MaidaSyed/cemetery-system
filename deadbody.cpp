#include "deadbody.h"

// Constructor definition
DeadBody::DeadBody(QString name, QString dateOfDeath, QString causeOfDeath, QString graveLocation, int age)
    : name(name), causeOfDeath(causeOfDeath), dateOfDeath(dateOfDeath), graveLocation(graveLocation),
    age(age){}

// Getter functions definition
QString DeadBody::getName() const {
    return name;
}

int DeadBody::getAge() const {
    return age;
}

QString DeadBody::getDateOfDeath() const {
    return dateOfDeath;
}

QString DeadBody::getCauseOfDeath() const {
    return causeOfDeath;
}

QString DeadBody::getGraveLocation() const {
    return graveLocation;
}
