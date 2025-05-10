#include "guard.h"

Guard::Guard(const QString& email, const QString& password, const QString& role)
    : Person(email, password, role) {}

bool Guard::canLogin() const {
    QTime current = QTime::currentTime();

    if (role.contains("morning", Qt::CaseInsensitive))
        return current >= QTime(6, 0) && current < QTime(12, 0);
    else if (role.contains("after noon", Qt::CaseInsensitive))
        return current >= QTime(12, 0) && current < QTime(18, 0);
    else if (role.contains("night", Qt::CaseInsensitive))
        return current >= QTime(18, 0) || current < QTime(6, 0);

    return false;
}
