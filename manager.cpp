#include "manager.h"

Manager::Manager(const QString& email, const QString& password, const QString& role)
    : Person(email, password, role) {}

bool Manager::canLogin() const {
    return true;  // Manager has no time restriction
}
