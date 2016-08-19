//
//  main.cpp
//  Game-1-2
//
//  Created by kong on 16/8/18.
//  Copyright © 2016年 konglee. All rights reserved.
//

#include <iostream>


class Shape
{
    public :
    
    void setWidth(int w)
    {
        width = w;
    }
    
    void setHeight(int h)
    {
        heigth = h;
    }
    
protected:
    
    int width;
    
    int heigth;
};

class Rect: public Shape {
    
    
public:
    int getArea()
    {
        return (width * heigth);
    }
};

class TotalLength: public Shape {
    
    
public:
    int getLength()
    {
        return (width + heigth) * 2;
    }
};

int main(int argc, const char * argv[]) {
    
    Rect Rec;
    Rec.setWidth(5);
    Rec.setHeight(7);
    std:: cout << "Total Area " << Rec.getArea() << std:: endl;
    
    TotalLength length;
    length.setWidth(4);
    length.setHeight(5);
    std:: cout << "Total Lenth " << length.getLength() << std:: endl;
    
    return 0;
}


