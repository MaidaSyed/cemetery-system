#include "grave.h"

Grave::Grave(QString no, QString loc, int h)
    : graveNo(no), location(loc), height(h) {}

QString Grave::getGraveNo() const {
    return graveNo;
}

QString Grave::getLocation() const {
    return location;
}

int Grave::getHeight() const {
    return height;
}

QString Grave::toString() const {
    return graveNo + "," + location + "," + QString::number(height);
}
