#ifndef GRAVE_H
#define GRAVE_H

#include <QString>

class Grave {
public:
    Grave(QString no = "", QString loc = "", int h = 0);

    QString getGraveNo() const;
    QString getLocation() const;
    int getHeight() const;

    QString toString() const;

private:
    QString graveNo;
    QString location;
    int height;
};

#endif // GRAVE_H
