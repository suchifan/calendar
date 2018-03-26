//
//  main.cpp
//  calendar
//
//  Created by suchao on 3/26/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int iWeek(int iYear, int iMonth, int iDay){
    
    if(iMonth == 1){
        iYear = iYear - 1;
        iMonth = 13;
    }else if(iMonth == 2){
        iYear = iYear - 1;
        iMonth = 14;
    }
    
    int c=iYear/100;
    int y=iYear%100;
    
    return ((c/4)-2*c+y+(y/4)+(26*(iMonth+1)/10)+iDay-1) % 7;
}

int findDay(int m){
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
            break;
        case 2:
            return 29;
            break;
        default:
            return 0;
            break;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "calendar\n";
    cout << "input year & month:";
    int y,m;
    cin >> y >> m;
    
    cout << "\t" << y << " 年 " << "\t" << m << "月" << endl;
    
    cout << "日" << "\t" << "一" << "\t" << "二" << "\t" << "三" << "\t" << "四" << "\t" << "五" << "\t" << "六" << endl;
    
    for (int i=1; i<=findDay(m); i++){
        int w = iWeek(y, m, i);
        if(i == 1){
            int t = w % 7;
            for(int j=0; j<t; j++){
                cout << "\t";
            }
        }
        cout << i << "\t";
        if(w == 6){
            cout << endl;
        }
            
            
    }
    cout << endl;
    
    return 0;
}
