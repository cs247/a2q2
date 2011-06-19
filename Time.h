/*
 *  Time.h
 *  
 *
 *  Created by Joanne Atlee on 18/05/11.
 *
 */


#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>


class Time {
public:
	Time();                                                 // default constructor -- value == NOW
	explicit Time (int hour, int min=0, int sec=0);         // constructor
	Time (const Time&);                                     // copy constructor
	~Time();                                                // destructor
	int hour() const;                                       // accessor
	int min() const;                                        // accessor
	int sec() const;                                        // accessor
	Time& operator= ( const Time& t);                       // assignment
private:
	struct Impl;
	Impl&  time_;
};

 
Time operator- (const Time&, const Time&);			// computes the duration between args
Time operator+ (const Time&, const Time&);			// adds a duration to a Time value

bool operator== (const Time&, const Time&);
bool operator!= (const Time&, const Time&);
bool operator< (const Time&, const Time&);
bool operator<= (const Time&, const Time&);
bool operator> (const Time&, const Time&);
bool operator>= (const Time&, const Time&);

std::istream& operator>> (std::istream&, Time&);
std::ostream& operator<< (std::ostream&, const Time&);

#endif