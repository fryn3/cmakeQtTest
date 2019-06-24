#include "a.h"
#include <iostream>

#include <QDebug.h>

#include "b/b.h"

A::A()
{
    std::cout << "class A" << std::endl;
    qDebug() << "qDebug() class A";
    B b;
}
