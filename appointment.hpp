#pragma once

#include <iostream>

class Appointment{
private:
    char* name;
    int startHour;
    int endHour;
    int startMin;
    int endMin;
    int month;
    int year;
    int date;
public:    
    Appointment();
    Appointment(const char* name, int startHour, int startMin, int endHour, int endMin, int month, int year, int date);
    int getStartHour() const;
    int getEndHour() const;
    int getStartMin() const;
    int getEndMin() const;
    int getMonth() const;
    int getYear() const;
    int getDate() const;
    const char* getName() const;
    void setStartHour(const int startHour);
    void setStartMin(const int startMin);
    void setEndHour(const int endHour);
    void setEndMin(const int endMin);
    void setMonth(const int month);
    void setYear(const int year);
    void setDate(const int date, const int month, const int year);
    void setName(const char* name);
    friend std::istream& operator>>(std::istream& in, Appointment appointment);
    friend std::ostream& operator<<(std::ostream& out, Appointment appointment);
    ~Appointment();
};
