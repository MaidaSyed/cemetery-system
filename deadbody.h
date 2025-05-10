#ifndef DEADBODY_H
#define DEADBODY_H

#include <QString>

class DeadBody {
private:
    QString name;
    QString dateOfDeath;
    QString causeOfDeath;
    QString graveLocation;
    int age;

public:
    // Constructor declaration
    DeadBody(QString name, QString dateOfDeath, QString causeOfDeath, QString graveLocation, int age);

    // Getter functions
    QString getName() const;
    int getAge() const;
    QString getDateOfDeath() const;
    QString getCauseOfDeath() const;
    QString getGraveLocation() const;
};

#endif // DEADBODY_H
