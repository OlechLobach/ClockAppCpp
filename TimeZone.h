#ifndef timezone_h
#define timezone_h

#include <string>

enum TimeZone {
    ENGLAND,
    UKRAINE,
    POLAND,
    SPAIN,
    ITALY
};

class Country {
private:
    TimeZone timeZone;

public:
    Country(); // Constructor
    TimeZone getTimeZone(); // Getter for TimeZone
    void setTimeZone(TimeZone tz); // Setter for TimeZone
    std::string getTimeZoneName(); // Returns the name of the selected time zone
};

#endif // !country_h
