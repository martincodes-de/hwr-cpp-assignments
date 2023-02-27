#ifndef HWR_CPP_ASSIGNMENTS_KOORDINATE_H
#define HWR_CPP_ASSIGNMENTS_KOORDINATE_H


class Koordinate {
    public:
        Koordinate(double x, double y) : m_x(x), m_y(y) {}
        double getX() const { return m_x; }
        double getY() const { return m_y; }
    private:
        double m_x;
        double m_y;
};


#endif //HWR_CPP_ASSIGNMENTS_KOORDINATE_H
