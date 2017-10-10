//
//  Concert.cpp
//
//  Created by pieter holleman on 10/3/17.
//

#include "Concert.h"
#include <iostream>
#include <string>
#include <vector>

/********************************************************************
 Overloaded constructor uses parameters to instantiate object
 ********************************************************************/
Concert::Concert(std::string name, std::vector<std::string> friends, int desire, std::tm date){
   
    this->concertName = name;
    this->friends = friends;
    this->desire = desire;
    this->date = date;
    
}

/********************************************************************
 Default contructor
 ********************************************************************/
Concert::Concert(){
 
}

/*********************************************************************
 Overload the < operator for comparing conerts by date
 *********************************************************************/
bool Concert::operator<(const Concert& other) const {
    
    if(this->date.tm_year < other.date.tm_year)return true;
    
    else if(this->date.tm_year == other.date.tm_year) {
        
        if (this->date.tm_mon < other.date.tm_mon)return true;
        
        else if (this->date.tm_mon == other.date.tm_mon &&
                 this->date.tm_mday < other.date.tm_mday) return true;
    }
    
    return false;
    
}

/*********************************************************************
 Accessor method for name
 *********************************************************************/
std::string Concert::getName() const{
    return concertName;
}

/*********************************************************************
 Overloading the << operator to print
 *********************************************************************/
std::ostream& operator<<(std::ostream& out, const Concert& concert){
    
    out << concert.getName();
    return out;
}

/********************************************************************
 * Main method that creates new concerts and sorts them
 *********************************************************************/
int main() {
    
    std::vector<Concert::Concert> concerts;
    
    std::vector<std::string> friends;
    friends.push_back("Dennis");
    friends.push_back("Mac");
    friends.push_back("Dee");
    friends.push_back("Frank");
    
    tm date1;
    date1.tm_year = 68;
    date1.tm_mon = 8;
    date1.tm_mday = 15;
    Concert concert1("Jimi Hendrix", friends, 10, date1);
    concerts.push_back(concert1);
    
    tm date2;
    date2.tm_year = 91;
    date2.tm_mon = 8;
    date2.tm_mday = 10;
    Concert concert2("Guns n Roses", friends, 7, date2);
    concerts.push_back(concert2);
    
    tm date3;
    date3.tm_year = 97;
    date3.tm_mon = 3;
    date3.tm_mday = 23;
    Concert concert3("Rage Against The Machine", friends, 10, date3);
    concerts.push_back(concert3);
    
    tm date4;
    date4.tm_year = 91;
    date4.tm_mon = 4;
    date4.tm_mday = 10;
    Concert concert4("Nirvana", friends, 10, date4);
    concerts.push_back(concert4);
    
    tm date5;
    date5.tm_year = 88;
    date5.tm_mon = 3;
    date5.tm_mday = 18;
    Concert concert5("Whitney Houston", friends, 8, date5);
    concerts.push_back(concert5);
    
    tm date6;
    date6.tm_year = 117;
    date6.tm_mon = 8;
    date6.tm_mday = 15;
    Concert concert6("Kendrick Llamar", friends, 9, date6);
    concerts.push_back(concert6);
    
    tm date7;
    date7.tm_year = 95;
    date7.tm_mon = 11;
    date7.tm_mday = 8;
    Concert concert7("Tupac", friends, 10, date7);
    concerts.push_back(concert7);
    
    tm date8;
    date8.tm_year = 86;
    date8.tm_mon = 1;
    date8.tm_mday = 25;
    Concert concert8("Hall And Oates", friends, 6, date8);
    concerts.push_back(concert8);
    
    tm date9;
    date9.tm_year = 104;
    date9.tm_mon = 4;
    date9.tm_mday = 22;
    Concert concert9("OutKast", friends, 8, date9);
    concerts.push_back(concert9);
    
    tm date10;
    date10.tm_year = 118;
    date10.tm_mon = 9;
    date10.tm_mday = 17;
    Concert concert10("Taylor Swift", friends, 4, date10);
    concerts.push_back(concert10);
    
    sort(concerts.begin(), concerts.end());
    
    for(int i=0; i<concerts.size(); ++i){
        std::cout << concerts[i] << "\n";
    }
    
    return 0;
}



