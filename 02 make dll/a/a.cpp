#include "a.h"
#include <iostream>

#include <QDebug.h>

A::A()
{
    std::cout << "class A" << std::endl;

    qDebug() << "qDebug() class A";
}
