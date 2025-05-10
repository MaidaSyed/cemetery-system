#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person {
protected:
    QString email;
    QString password;
    QString role;

public:
    Person(const QString& e, const QString& p, const QString& r);
    virtual ~Person() {}

    virtual bool canLogin() const { return true; }

    QString getRole() const { return role; }
    QString getEmail() const { return email; }
    QString getPassword() const { return password; }
};

#endif // PERSON_H
