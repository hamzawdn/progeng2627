#include <iostream>

bool leap_year(int year) {
    bool ly;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                ly = true;
            } else {
                ly = false;
            }
        } else {
            ly = true;
        }
    } else {
        ly = false;
    }

    return ly;
}

/*void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2) {
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
    // Y, X, Y, N, Y, N, Y, Y, N, Y,  N,  Y

    int max_day = 30;
    // max day determined by month as above
    // feb needs leap year consideration

    if (d1 + 1 > max_day) {
        // Set days to zero
        // Incremement month
        // If incrementing it causes it to overflow increment the year
    }

    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}*/

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2) {
    // TODO: d1, m1, y1 are inputs 
    // corresponding to the date d1/m1/y1
    // d2, m2, y2 are outputs that the function must compute
    // corresponding to the date d2/m2/y2 
    // which is meant to be the day after d1/m1/y1

    // 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
    // Y, X, Y, N, Y, N, Y, Y, N, Y,  N,  Y

    int max_day = 30;
    y2 = y1;

    if (m1 == 2) {
        max_day = leap_year(y1) ? 29 : 28;
    } else {
        if (m1 < 8) {
            if (m1 % 2 == 1) {
                max_day = 31;
            }
        } else {
            if (m1 % 2 == 0) {
                max_day = 31;
            }
        }
    }

    if (d1 + 1 > max_day) {
        d2 = 1;
        m2 = m1 + 1;
        if (m2 > 12) {
            m2 = 1;
            y2 = y1 + 1;
        }
        // Set days to zero
        // Incremement month
        // If incrementing it causes it to overflow increment the year
    } else {
        d2 = d1 + 1;
        m2 = m1;
    }
    // function leap_year is useful for this task

    // do not begin to write code straightaway
    // sketch some diagrams first like we did
    // for the leap year task

    // (this function should not print anything)

}

int main() {
    int d1, m1, y1, d2, m2, y2;

    std::cout << "Enter a date (D, M, Y): " << std::endl;
    std::cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);

    std::cout << d2 << " / " << m2 << " / " << y2 <<std::endl;
}