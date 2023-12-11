#include "TimeZone.h"

Country::Country() {
    this->timeZone = ENGLAND; // Default to England
}

TimeZone Country::getTimeZone() {
    return this->timeZone;
}

void Country::setTimeZone(TimeZone tz) {
    this->timeZone = tz;
}

std::string Country::getTimeZoneName() {
    switch (this->timeZone) {
    case ENGLAND:
        return "England";
    case UKRAINE:
        return "Ukraine";
    case POLAND:
        return "Poland";
    case SPAIN:
        return "Spain";
    case ITALY:
        return "Italy";
    default:
        return "Unknown";
    }
}