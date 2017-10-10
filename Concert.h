//
//  Concert.h
//
//  Created by pieter holleman on 10/3/17.
//

#ifndef Concert_hpp
#define Concert_hpp

#include <string>
#include <vector>
/********************************************************************
 C++ representing a concert
 ********************************************************************/
class Concert {
    
    
private:
    
    std::string concertName;
    std::vector<std::string> friends;
    int desire;
    std::tm date;
    
    
public:
    
    Concert();
    Concert(std::string name, std::vector<std::string> frnds, int desire, std::tm date);
    bool operator<(const Concert& other) const;
    std::string getName() const;
    
};

#endif
