#include "b.h"
#include <iostream>

#include <QDebug.h>

B::B()
{
    std::cout << "class B" << std::endl;
    qDebug() << "qDebug() class B";
}
