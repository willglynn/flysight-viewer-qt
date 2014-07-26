#ifndef DATAPOINT_H
#define DATAPOINT_H

#include <QDateTime>

class DataPoint
{
public:
    QDateTime   dateTime;

    double      lat;
    double      lon;
    double      hMSL;

    double      velN;
    double      velE;
    double      velD;

    double      t;
    double      x;
    double      y;
    double      z;

    double      dist2D;
    double      dist3D;

    double      curv;
};

DataPoint interpolate(const DataPoint &p1,
                      const DataPoint &p2,
                      double a);

#endif // DATAPOINT_H
